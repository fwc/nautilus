/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9557
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9557
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
void test(val<unsigned int> var_0, val<long long int> var_2, val<int> var_3, val<bool> var_4, val<unsigned short> var_5, val<signed char> var_8, val<int> var_9, val<long long int> var_10, val<unsigned int> var_12, val<int> zero, val<short*> var_13, val<short*> var_14, val<signed char*> var_15, val<unsigned char*> var_16, val<int*> var_17, val<short*> var_18) {
    *var_13 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(-6644089151733080637LL)))) ? (((/* implicit */val<unsigned int>) min((var_9), (var_9)))) : (((1371112131U) << (((var_9) - (1776790947)))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) (~(1371112131U)))) >= ((+(6644089151733080636LL))))))) : (min((max((((/* implicit */val<long long int>) 1906326850)), (var_10))), (((/* implicit */val<long long int>) ((15356768125416619177ULL) == (((/* implicit */val<unsigned long long int>) var_2)))))))));
    *var_14 ^= (val<short>)-25719;
    if ((val<bool>)1)
    {
        *var_15 = max((((/* implicit */val<signed char>) ((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_4))))) != (var_12)))), (var_8));
        *var_16 = ((/* implicit */val<unsigned char>) min((*var_16), (((/* implicit */val<unsigned char>) min((max(((-(0ULL))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_10)) ? (var_3) : (((/* implicit */val<int>) (val<signed char>)-89))))))), (((/* implicit */val<unsigned long long int>) (~(((((/* implicit */val<bool>) 0ULL)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) : (var_0)))))))))));
        *var_17 = ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 10LL)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned char>)64)) == (((/* implicit */val<int>) (val<bool>)0)))))) : ((-(var_0)))))) | (((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) (val<signed char>)116)), (0ULL)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-26601))) : (-11LL)))));
    }

    *var_18 = ((/* implicit */val<short>) (+(((/* implicit */val<int>) (val<unsigned char>)58))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2275816450U;
long long int var_2 = 6740530456163240958LL;
int var_3 = 1046092080;
bool var_4 = (bool)0;
unsigned short var_5 = (unsigned short)48746;
signed char var_8 = (signed char)-77;
int var_9 = 1776790954;
long long int var_10 = 8075817966982463444LL;
unsigned int var_12 = 3085756813U;
int zero = 0;
short var_13 = (short)19139;
short var_14 = (short)10276;
signed char var_15 = (signed char)46;
unsigned char var_16 = (unsigned char)33;
int var_17 = -969043471;
short var_18 = (short)-16163;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)0;
    value_mismatch |= var_14 != (short)-19539;
    value_mismatch |= var_15 != (signed char)1;
    value_mismatch |= var_16 != (unsigned char)33;
    value_mismatch |= var_17 != -11;
    value_mismatch |= var_18 != (short)58;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_8, var_9, var_10, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
