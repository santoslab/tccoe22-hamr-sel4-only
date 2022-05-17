#ifndef SIREUM_TYPE_H_org_sireum_Option_A8F8FC
#define SIREUM_TYPE_H_org_sireum_Option_A8F8FC

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[t.TemperatureControl.Fan_i_Operational_Api]

#include <type-org_sireum_None_475EF0.h>
#include <type-org_sireum_Some_A89224.h>

typedef union Option_A8F8FC *Option_A8F8FC;
union Option_A8F8FC {
  TYPE type;
  struct None_475EF0 None_475EF0;
  struct Some_A89224 Some_A89224;
};

#define DeclNewOption_A8F8FC(x) union Option_A8F8FC x = { 0 }

#ifdef __cplusplus
}
#endif

#endif