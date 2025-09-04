/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8016
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8016
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
void test(val<unsigned short> var_0, val<long long int> var_4, val<unsigned long long int> var_8, val<signed char> var_11, val<int> zero, val<unsigned char*> var_12, val<long long int*> var_13) {
    *var_12 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_8)) && (((/* implicit */val<bool>) (val<signed char>)-1))))) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<signed char>)8)) ? (((/* implicit */val<int>) (val<signed char>)-116)) : (((/* implicit */val<int>) var_11))))) >= ((+(13314273948137084560ULL))))))));
    *var_13 = ((/* implicit */val<long long int>) ((var_4) >= (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<bool>)1)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29481;
long long int var_4 = -4555798986332698642LL;
unsigned long long int var_8 = 9496234307719448989ULL;
signed char var_11 = (signed char)98;
int zero = 0;
unsigned char var_12 = (unsigned char)199;
long long int var_13 = -6822995265317679602LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)1;
    value_mismatch |= var_13 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_8, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
