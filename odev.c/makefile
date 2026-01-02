# Derleyici Ayarları
CC = gcc
CFLAGS = -Wall -Wextra -I.

# Klasör Ayarları (Burası Yeni)
BUILD_DIR = build
TARGET = $(BUILD_DIR)/hamsidb

# Tüm .c dosyalarını bul
SRCS = $(wildcard *.c)
# .c dosyalarını build klasörünün içindeki .o dosyalarına eşle
OBJS = $(patsubst %.c, $(BUILD_DIR)/%.o, $(SRCS))

# Varsayılan Hedef
all: create_dir $(TARGET)

# 1. Önce build klasörünü oluştur (Yoksa hata verir garibim)
create_dir:
	@mkdir -p $(BUILD_DIR)

# 2. Programı bağla (Link)
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)
	@echo "🔥 İşlem Tamam! Program şurada: $(TARGET)"

# 3. Her .c dosyasını build klasörü içine derle
$(BUILD_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Temizlik (Build klasörünü komple uçurur)
clean:
	rm -rf $(BUILD_DIR)
	@echo "🧹 Dükkan süpürüldü (build klasörü silindi)."