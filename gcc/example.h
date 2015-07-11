#define RED     0x02
#define BLUE    0x04
#define GREEN   0x08
#define YELLOW  0x0A
#define CYAN    0x0C
#define PURPLE  0x06
#define WHITE   0x0E

void flash(char lights, uint32_t loop_count, uint32_t delay);
void rainbow(uint32_t loop_count, uint32_t delay);
