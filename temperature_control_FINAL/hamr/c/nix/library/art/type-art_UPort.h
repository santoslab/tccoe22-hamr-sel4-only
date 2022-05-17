#ifndef SIREUM_TYPE_H_art_UPort
#define SIREUM_TYPE_H_art_UPort

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.UPort

#include <type-art_art_Port_7B28AF.h>
#include <type-art_art_Port_9CBF18.h>
#include <type-art_art_Port_0A16CC.h>
#include <type-art_art_Port_216126.h>
#include <type-art_art_Port_2ED9E6.h>

typedef union art_UPort *art_UPort;
union art_UPort {
  TYPE type;
  struct art_Port_7B28AF art_Port_7B28AF;
  struct art_Port_9CBF18 art_Port_9CBF18;
  struct art_Port_0A16CC art_Port_0A16CC;
  struct art_Port_216126 art_Port_216126;
  struct art_Port_2ED9E6 art_Port_2ED9E6;
};

#define DeclNewart_UPort(x) union art_UPort x = { 0 }

#ifdef __cplusplus
}
#endif

#endif