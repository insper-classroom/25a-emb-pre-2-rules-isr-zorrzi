#include "asf.h"

int volatile g_flag;

// This code creates a progress bar on an OLED screen that
// increases when the button is pressed.
void btn_callback(void) {
  g_flag = 1;
  
}

void main(void) {
  int g_cnt = 0;
  char g_str[10];

  
  if (g_cnt >= 8)
    g_cnt = 0;

  if(g_flag == 1){
    g_flag = 0;
    
    int i = 0;
    for (i = 0; i < g_cnt; i++) {
      g_str[i] = '*';
      delay_ms(50);
      gfx_mono_draw_string(g_str, 0, 0, &sysfont);
      g_cnt++;
    }
  }
  
  

  while (1) {
  }
}
