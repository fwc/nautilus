/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1279
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1279
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
void test(val<short> var_0, val<unsigned char> var_1, val<unsigned char> var_2, val<long long int> var_4, val<unsigned char> var_9, val<unsigned long long int> var_13, val<int> zero, val<signed char*> var_15, val<signed char*> var_16, val<unsigned long long int*> var_17) {
    *var_15 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<short>)-14790)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)118))) : (1648028323U)))) : (max((max((var_4), (((/* implicit */val<long long int>) 2646938966U)))), (((/* implicit */val<long long int>) var_1))))));
    *var_16 = ((/* implicit */val<signed char>) min((*var_16), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<short>)5855)) || (((/* implicit */val<bool>) (val<short>)530)))))) ^ ((-(1648028323U)))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)65535)) ? (var_13) : (((/* implicit */val<unsigned long long int>) (-9223372036854775807LL - 1LL)))))) ? (((/* implicit */val<unsigned long long int>) min((var_4), (((/* implicit */val<long long int>) var_2))))) : (max((((/* implicit */val<unsigned long long int>) var_9)), (var_13))))))))));
    *var_17 -= ((/* implicit */val<unsigned long long int>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16429;
unsigned char var_1 = (unsigned char)64;
unsigned char var_2 = (unsigned char)229;
long long int var_4 = -2763682368661570622LL;
unsigned char var_9 = (unsigned char)101;
unsigned long long int var_13 = 162348280789881445ULL;
int zero = 0;
signed char var_15 = (signed char)-55;
signed char var_16 = (signed char)-86;
unsigned long long int var_17 = 13085331297246025200ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)118;
    value_mismatch |= var_16 != (signed char)-86;
    value_mismatch |= var_17 != 13085331297246008771ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_9, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
