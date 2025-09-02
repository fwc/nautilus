/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6877
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6877
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<int> var_0, val<unsigned char> var_2, val<unsigned short> var_5, val<unsigned int> var_6, val<unsigned long long int> var_9, val<unsigned char> var_10, val<long long int> var_11, val<int> zero, val<unsigned short*> var_13, val<unsigned short*> var_14, val<unsigned int*> var_15, val<unsigned long long int*> var_16, val<unsigned short*> var_17) {
    *var_13 = ((/* implicit */val<unsigned short>) var_9);
    *var_14 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)9384)) ? (-12) : (((((/* implicit */val<int>) var_10)) / (((/* implicit */val<int>) var_2))))))) ? (((min((var_6), (((/* implicit */val<unsigned int>) var_5)))) - (((/* implicit */val<unsigned int>) var_0)))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned short>)8192)) << (((((/* implicit */val<int>) (val<short>)12201)) - (12188))))))));
    *var_15 = ((/* implicit */val<unsigned int>) var_11);
    *var_16 = ((((/* implicit */val<bool>) 3714949365469346237LL)) ? (6767024414751679093ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)8192))));
    *var_17 = ((/* implicit */val<unsigned short>) min((((((val<unsigned long long int>) 18446744073709551615ULL)) << (((((/* implicit */val<int>) var_10)) - (71))))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<short>)-12232)) > (((/* implicit */val<int>) (val<signed char>)-117)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 341097135;
unsigned char var_2 = (unsigned char)96;
unsigned short var_5 = (unsigned short)61387;
unsigned int var_6 = 3817182995U;
unsigned long long int var_9 = 6103410908372010764ULL;
unsigned char var_10 = (unsigned char)81;
long long int var_11 = 7472291377101843062LL;
int zero = 0;
unsigned short var_13 = (unsigned short)12676;
unsigned short var_14 = (unsigned short)41314;
unsigned int var_15 = 217275976U;
unsigned long long int var_16 = 17673365860424173340ULL;
unsigned short var_17 = (unsigned short)51355;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)1804;
    value_mismatch |= var_14 != (unsigned short)13596;
    value_mismatch |= var_15 != 3864963702U;
    value_mismatch |= var_16 != 6767024414751679093ULL;
    value_mismatch |= var_17 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_6, var_9, var_10, var_11, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
