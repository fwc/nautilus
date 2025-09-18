/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1940
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1940
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
void test(val<unsigned char> var_0, val<int> zero, val<unsigned long long int*> var_18, val<unsigned char*> var_19, val<unsigned short*> var_20) {
    *var_18 = ((/* implicit */val<unsigned long long int>) (val<short>)15561);
    *var_19 = ((/* implicit */val<unsigned char>) ((val<short>) 17747983530606010446ULL));
    *var_20 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_0)) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<short>)10677)) + (((/* implicit */val<int>) (val<unsigned short>)65526))))) ? ((~(((/* implicit */val<int>) (val<short>)-15573)))) : (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned short>)53785)) < (((/* implicit */val<int>) (val<unsigned char>)118))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
int zero = 0;
unsigned long long int var_18 = 3017561939350026943ULL;
unsigned char var_19 = (unsigned char)208;
unsigned short var_20 = (unsigned short)42812;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 15561ULL;
    value_mismatch |= var_19 != (unsigned char)78;
    value_mismatch |= var_20 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, zero, &var_18, &var_19, &var_20);
  checksum();
}
