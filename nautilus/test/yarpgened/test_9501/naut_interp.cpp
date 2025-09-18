/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9501
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9501
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
void test(val<signed char> var_1, val<signed char> var_2, val<bool> var_9, val<short> var_11, val<unsigned long long int> var_12, val<int> zero, val<signed char*> var_13, val<int*> var_14, val<long long int*> var_15, val<signed char*> var_16, val<unsigned short*> var_17) {
    *var_13 = min((var_2), (((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (-1695474148) : (((/* implicit */val<int>) var_11)))))))));
    *var_14 = ((/* implicit */val<int>) min((*var_14), (((/* implicit */val<int>) (val<signed char>)85))));
    *var_15 = ((val<long long int>) var_2);
    *var_16 = ((/* implicit */val<signed char>) 1695474158);
    *var_17 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned int>) -1695474144)) : (max((max((2391927705U), (((/* implicit */val<unsigned int>) var_9)))), (((/* implicit */val<unsigned int>) ((val<int>) (val<signed char>)111)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-116;
signed char var_2 = (signed char)-41;
bool var_9 = (bool)0;
short var_11 = (short)-28645;
unsigned long long int var_12 = 2304330591495326967ULL;
int zero = 0;
signed char var_13 = (signed char)-109;
int var_14 = -1182837960;
long long int var_15 = 3264817316134526931LL;
signed char var_16 = (signed char)101;
unsigned short var_17 = (unsigned short)5235;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)-41;
    value_mismatch |= var_14 != -1182837960;
    value_mismatch |= var_15 != -41LL;
    value_mismatch |= var_16 != (signed char)-18;
    value_mismatch |= var_17 != (unsigned short)7712;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_9, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
