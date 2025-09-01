# Generate a 2048-bit RSA private key for the Root CA

openssl genrsa -out ca.key 2048

# Create a self-signed Root CA certificate valid for 100 years (36500 days)

openssl req -x509 -new -nodes -key ca.key -sha256 -days 36500 -out ca.crt \
-subj "/C=XY/ST=Fictionland/L=Imaginary City/O=Fictional Corp/OU=Creative Department/CN=ca.example.com/emailAddress=ca@example.com"

# Generate a 2048-bit RSA private key for the RCU client

openssl genrsa -out test_rcc_server.key 2048

# Create a CSR for RCU client with different CN and email

openssl req -new -key test_rcc_server.key -out test_rcc_server.csr \
-subj "/C=XY/ST=Fictionland/L=Imaginary City/O=Fictional Corp/OU=Creative Department/CN=rcc_server.example.com/emailAddress=rcc_server@example.com"

# Sign the CSR with the Root CA to generate client certificate valid for 100 years

openssl x509 -req -in test_rcc_server.csr -CA test_rcs_ca.crt -CAkey test_rcs_ca.key -CAcreateserial \
-out test_rcc_server.crt -days 36500 -sha256
