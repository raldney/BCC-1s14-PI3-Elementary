#include <opencv/highgui.h>

#include <stdio.h>
#include <time.h>

#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h> 
#include <allegro5/allegro.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>

typedef struct {
  unsigned char ***quadro;
  int largura, altura;
  CvCapture *capture;
} camera;



camera *camera_inicializa(int i);
void camera_finaliza(camera *cam);

void camera_atualiza(camera *cam);
void camera_copia(camera *cam, unsigned char ***matriz, ALLEGRO_BITMAP *bitmap);

unsigned char ***camera_aloca_matriz(camera *cam);
void camera_libera_matriz(camera *cam, unsigned char ***matriz);


void RGB2HSV(int red, int green, int blue, int *h, int *s, int *v);
void cameraRastreia( camera *cam,int *px, int *py);
void mediana(camera *cam);




