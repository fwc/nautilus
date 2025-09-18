/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7973
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7973
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
void test(val<int> var_1, val<long long int> var_2, val<unsigned short> var_4, val<unsigned long long int> var_8, val<bool> var_10, val<unsigned short> var_13, val<unsigned long long int> var_16, val<int> zero, val<long long int*> var_17, val<unsigned int*> var_18, val<unsigned short*> var_19, val<unsigned char*> var_20, val<unsigned int*> var_21) {
    *var_17 &= ((/* implicit */val<long long int>) var_16);
    *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((var_10) ? ((-(((/* implicit */val<int>) (val<signed char>)-81)))) : (((/* implicit */val<int>) (((val<bool>)1) && (((/* implicit */val<bool>) 258048U)))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))) : (min((var_2), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_10)))))))));
    *var_19 *= ((/* implicit */val<unsigned short>) var_8);
    *var_20 = ((/* implicit */val<unsigned char>) var_10);
    *var_21 = ((/* implicit */val<unsigned int>) 9223372036854775786LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 450564987;
long long int var_2 = 2004558389577308794LL;
unsigned short var_4 = (unsigned short)28150;
unsigned long long int var_8 = 5670001678966542903ULL;
bool var_10 = (bool)0;
unsigned short var_13 = (unsigned short)39297;
unsigned long long int var_16 = 14485526801453058954ULL;
int zero = 0;
long long int var_17 = 8138984099156304801LL;
unsigned int var_18 = 2330500546U;
unsigned short var_19 = (unsigned short)17830;
unsigned char var_20 = (unsigned char)145;
unsigned int var_21 = 107053305U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 4612364281139331968LL;
    value_mismatch |= var_18 != 39297U;
    value_mismatch |= var_19 != (unsigned short)8874;
    value_mismatch |= var_20 != (unsigned char)0;
    value_mismatch |= var_21 != 4294967274U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_8, var_10, var_13, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
