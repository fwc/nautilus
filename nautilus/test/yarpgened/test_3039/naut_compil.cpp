/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3039
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3039
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<unsigned short> var_6, val<int> var_10, val<int> zero, val<unsigned short*> var_13, val<long long int*> var_14, val<long long int*> var_15, val<long long int*> var_16, val<unsigned short*> var_17) {
    *var_13 = ((/* implicit */val<unsigned short>) (-(((((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) (val<unsigned short>)57108)) : (((/* implicit */val<int>) (val<unsigned char>)144)))) & (((/* implicit */val<int>) (val<unsigned short>)8428))))));
    *var_14 = ((/* implicit */val<long long int>) var_6);
    *var_15 = ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) min((min((((/* implicit */val<unsigned short>) (val<bool>)0)), ((val<unsigned short>)8436))), ((val<unsigned short>)59662))))));
    *var_16 = ((/* implicit */val<long long int>) min((*var_16), (((/* implicit */val<long long int>) (+((+((-(((/* implicit */val<int>) (val<unsigned short>)5874)))))))))));
    *var_17 = ((/* implicit */val<unsigned short>) (val<short>)-21981);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)20059;
int var_10 = 424436727;
int zero = 0;
unsigned short var_13 = (unsigned short)41434;
long long int var_14 = 1642611991636009537LL;
long long int var_15 = 2211351856239783345LL;
long long int var_16 = 1810799683834126506LL;
unsigned short var_17 = (unsigned short)56249;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)65532;
    value_mismatch |= var_14 != 20059LL;
    value_mismatch |= var_15 != 0LL;
    value_mismatch |= var_16 != -5874LL;
    value_mismatch |= var_17 != (unsigned short)43555;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_10, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
