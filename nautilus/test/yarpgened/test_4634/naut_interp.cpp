/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4634
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4634
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
void test(val<long long int> var_1, val<unsigned char> var_2, val<unsigned int> var_7, val<short> var_8, val<unsigned char> var_10, val<unsigned short> var_11, val<long long int> var_12, val<unsigned int> var_16, val<int> zero, val<unsigned long long int*> var_19, val<signed char*> var_20) {
    *var_19 = min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_10)) ? (((((/* implicit */val<bool>) var_1)) ? (var_16) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11))))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_2)))))))), (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)3072))) : (var_12)))) : (((((/* implicit */val<bool>) 6ULL)) ? (18446744073709551605ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)64))))))));
    *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) (val<unsigned char>)249)) > (((/* implicit */val<int>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -756322648825225615LL;
unsigned char var_2 = (unsigned char)174;
unsigned int var_7 = 1852597671U;
short var_8 = (short)-14115;
unsigned char var_10 = (unsigned char)200;
unsigned short var_11 = (unsigned short)45814;
long long int var_12 = 7704421276572713527LL;
unsigned int var_16 = 3976565944U;
int zero = 0;
unsigned long long int var_19 = 16188901057153650040ULL;
signed char var_20 = (signed char)101;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 3072ULL;
    value_mismatch |= var_20 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, var_8, var_10, var_11, var_12, var_16, zero, &var_19, &var_20);
  checksum();
}
