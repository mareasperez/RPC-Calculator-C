#include "calcular.h"
extern SumaRes *suma_1_svc(SumaArg a, struct svc_req *rqstp)
{
 SumaRes *res;
 res = (SumaRes *) malloc (sizeof(struct SumaRes));
  res->c = a.a+a.b;
 return(res);
}
extern SumaRes *resta_1_svc(SumaArg a, struct svc_req *rqstp)
{
 SumaRes *res;
 res = (SumaRes *) malloc (sizeof(struct SumaRes));
  res->c = a.a-a.b;
 return(res);
}
extern SumaRes *multi_1_svc(SumaArg a, struct svc_req *rqstp)
{
 SumaRes *res;
 res = (SumaRes *) malloc (sizeof(struct SumaRes));
  res->c = a.a*a.b;
 return(res);
}
extern SumaRes *div_1_svc(SumaArg a, struct svc_req *rqstp)
{
 SumaRes *res;
 res = (SumaRes *) malloc (sizeof(struct SumaRes));
  res->c = a.a/a.b;
 return(res);
}

