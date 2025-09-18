/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5775
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5775
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
void test(val<unsigned short> var_0, val<unsigned short> var_1, val<short> var_4, val<unsigned long long int> var_8, val<unsigned char> var_9, val<signed char> var_11, val<unsigned long long int> var_12, val<int> zero, val<short*> var_13, val<long long int*> var_14) {
    *var_13 = ((/* implicit */val<short>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) / (var_8))))))) < (max((((672983996) ^ (-672983974))), (((/* implicit */val<int>) ((val<unsigned char>) var_8)))))));
    *var_14 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((-672983981) + (2147483647))) << (((((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) : (9223372036854775807LL))) - (10834LL)))))) ? (((max((var_12), (((/* implicit */val<unsigned long long int>) var_11)))) ^ (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((5679085699979340531LL) > (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))))))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) -1159312154)) ? (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) == (-5679085699979340550LL)))) : (((/* implicit */val<int>) max((var_0), (((/* implicit */val<unsigned short>) var_11))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)610;
unsigned short var_1 = (unsigned short)10834;
short var_4 = (short)5645;
unsigned long long int var_8 = 959517238802525995ULL;
unsigned char var_9 = (unsigned char)162;
signed char var_11 = (signed char)-61;
unsigned long long int var_12 = 10032734628151990475ULL;
int zero = 0;
short var_13 = (short)10995;
long long int var_14 = -4834478527223047979LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)1;
    value_mismatch |= var_14 != -62LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_8, var_9, var_11, var_12, zero, &var_13, &var_14);
  checksum();
}
