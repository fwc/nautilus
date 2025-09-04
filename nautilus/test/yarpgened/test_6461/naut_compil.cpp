/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6461
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6461
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
void test(val<unsigned long long int> var_0, val<short> var_1, val<unsigned char> var_2, val<unsigned short> var_3, val<unsigned int> var_10, val<bool> var_13, val<long long int> var_14, val<unsigned char> var_15, val<int> zero, val<short*> var_16, val<long long int*> var_17) {
    *var_16 = ((/* implicit */val<short>) ((max(((+(764739365512341304LL))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_3)) ? (var_10) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1)))))))) | (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned short>) ((var_13) && (((/* implicit */val<bool>) var_10)))))))));
    *var_17 = ((/* implicit */val<long long int>) max((max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))) + (-7876231557718706627LL)))), (max((((/* implicit */val<unsigned long long int>) var_15)), (var_0))))), (((((/* implicit */val<bool>) -829100045)) ? (((/* implicit */val<unsigned long long int>) (~(var_14)))) : (min((var_0), (((/* implicit */val<unsigned long long int>) var_2))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17533614122889623337ULL;
short var_1 = (short)10788;
unsigned char var_2 = (unsigned char)94;
unsigned short var_3 = (unsigned short)46207;
unsigned int var_10 = 211396670U;
bool var_13 = (bool)1;
long long int var_14 = -9178938095076624931LL;
unsigned char var_15 = (unsigned char)163;
int zero = 0;
short var_16 = (short)22384;
long long int var_17 = 4894287644533745299LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)-6343;
    value_mismatch |= var_17 != -913129950819928279LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_10, var_13, var_14, var_15, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
