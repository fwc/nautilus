/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1963
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1963
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
void test(val<long long int> var_0, val<unsigned short> var_1, val<signed char> var_2, val<unsigned short> var_14, val<int> var_15, val<bool> var_18, val<int> zero, val<short*> var_19, val<short*> var_20, val<long long int*> var_21) {
    *var_19 = ((/* implicit */val<short>) min((*var_19), (((/* implicit */val<short>) ((((((((/* implicit */val<int>) var_18)) % (((/* implicit */val<int>) (val<unsigned char>)255)))) << (((((/* implicit */val<int>) (val<unsigned char>)166)) - (156))))) % (((/* implicit */val<int>) ((8181040017463024589LL) > ((+(var_0)))))))))));
    *var_20 = ((/* implicit */val<short>) var_2);
    *var_21 = ((/* implicit */val<long long int>) min((min((((/* implicit */val<int>) var_14)), (var_15))), (((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1968194949358961383LL;
unsigned short var_1 = (unsigned short)28465;
signed char var_2 = (signed char)-16;
unsigned short var_14 = (unsigned short)53302;
int var_15 = -1568183261;
bool var_18 = (bool)1;
int zero = 0;
short var_19 = (short)19067;
short var_20 = (short)-18659;
long long int var_21 = -2771627655546260081LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)0;
    value_mismatch |= var_20 != (short)-16;
    value_mismatch |= var_21 != -1568183261LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_14, var_15, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
