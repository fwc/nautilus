/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3695
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3695
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
void test(val<long long int> var_1, val<long long int> var_2, val<long long int> var_7, val<signed char> var_8, val<unsigned short> var_9, val<unsigned char> var_11, val<long long int> var_13, val<unsigned int> var_16, val<int> zero, val<unsigned char*> var_17, val<unsigned char*> var_18, val<signed char*> var_19) {
    *var_17 |= ((/* implicit */val<unsigned char>) min((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (var_1) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8)))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_11)))))) : (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (var_7))))), (((((/* implicit */val<bool>) var_9)) ? (((((/* implicit */val<bool>) var_16)) ? (var_13) : (((/* implicit */val<long long int>) var_16)))) : (var_2)))));
    *var_18 = ((/* implicit */val<unsigned char>) var_9);
    *var_19 = ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9))))) <= (((/* implicit */val<int>) max((var_9), (((/* implicit */val<unsigned short>) var_8))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6910540032507023482LL;
long long int var_2 = -7511007597204465048LL;
long long int var_7 = 7449773319563550375LL;
signed char var_8 = (signed char)101;
unsigned short var_9 = (unsigned short)48300;
unsigned char var_11 = (unsigned char)230;
long long int var_13 = 1035114230392592154LL;
unsigned int var_16 = 3486428849U;
int zero = 0;
unsigned char var_17 = (unsigned char)31;
unsigned char var_18 = (unsigned char)216;
signed char var_19 = (signed char)-94;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)31;
    value_mismatch |= var_18 != (unsigned char)172;
    value_mismatch |= var_19 != (signed char)-2;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, var_8, var_9, var_11, var_13, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
}
