# TBT Project

## Folder Structure

```
readme.md
encrypter/
    go.mod
    service.go
    assets/
        key.txt
        outputs/
generater/
    characters.h
    main.cpp
```

## How to Run

### Prerequisites
- Go (1.13+)
- g++

### Steps
1. **Set your key:**
   - Put a 16, 24, or 32 character key in `encrypter/assets/key.txt`.
2. **Generate passwords:**
   - Build and run the C++ code in `generater/` to create `passwords.txt`.
3. **Encrypt:**
   - In the `encrypter` folder, run:
     ```sh
     go run service.go
     ```
   - This will encrypt `../generater/passwords.txt` and create `assets/ciphertext.bin`.
4. **Decrypt:**
   - The Go program can also decrypt `assets/ciphertext.bin` to `assets/outputs/plaintext.txt`.

## Notes
- The current encrypter (`encrypter/service.go`) is from [this Medium article](https://medium.com/@mertkimyonsen/encrypt-a-file-using-go-f1fe3bc7c635), but has been tweaked for my use case. I will be writing my own when I have the time to.
- Make sure your key is the correct length.