/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5938
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5938
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
void test(val<unsigned long long int> var_5, val<short> var_8, val<long long int> var_9, val<int> zero, val<unsigned long long int*> var_17, val<signed char*> var_18, val<unsigned int*> var_19) {
    *var_17 = 16887245426267309895ULL;
    *var_18 = ((/* implicit */val<signed char>) ((val<unsigned int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) <= (((16887245426267309902ULL) % (1559498647442241733ULL))))));
    *var_19 = ((/* implicit */val<unsigned int>) max((*var_19), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) max((max((((/* implicit */val<long long int>) (val<unsigned char>)9)), (var_9))), (((/* implicit */val<long long int>) var_8))))) ? (max(((-(16887245426267309895ULL))), (var_5))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 0ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)0))) : (7ULL)))) ? (((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<short>)-16994)), ((val<unsigned short>)37717)))) : (((/* implicit */val<int>) max((((/* implicit */val<short>) (val<bool>)1)), ((val<short>)16994))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 854464710875405486ULL;
short var_8 = (short)-9341;
long long int var_9 = -1867959863087894240LL;
int zero = 0;
unsigned long long int var_17 = 15130868925957716164ULL;
signed char var_18 = (signed char)82;
unsigned int var_19 = 3447425227U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 16887245426267309895ULL;
    value_mismatch |= var_18 != (signed char)0;
    value_mismatch |= var_19 != 3699325113U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, var_9, zero, &var_17, &var_18, &var_19);
  checksum();
}
