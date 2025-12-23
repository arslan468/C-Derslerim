CC = gcc

TARGET = mongo_and_c
SRC = main.c database.c

CFLAGS = -I/opt/homebrew/Cellar/mongo-c-driver/2.2.1/include/mongoc-2.2.1 \
		-I/opt/homebrew/Cellar/mongo-c-driver/2.2.1/include/bson-2.2.1 \


LDFLAGS = -L/opt/homebrew/Cellar/mongo-c-driver/2.2.1/lib \
	-lmongoc2 -lbson2

#make yazınca çalışır
all:
	$(CC) -o $(TARGET) $(SRC) $(CFLAGS) $(LDFLAGS)

# "make clean" yazınca oluşan dosyayı siler
clean:
	rm -f $(TARGET)
