/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6905
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6905
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
void test(val<int> zero, val<unsigned long long int*> var_18, val<signed char*> var_19, val<long long int*> var_20) {
    *var_18 = ((/* implicit */val<unsigned long long int>) (val<signed char>)124);
    *var_19 *= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (-9223372036854775807LL - 1LL))) ? (7065220964528884311ULL) : (7065220964528884311ULL)));
    *var_20 = ((/* implicit */val<long long int>) ((((min((7065220964528884293ULL), (11381523109180667293ULL))) << (((((7065220964528884311ULL) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)128))))) - (7065220964528884146ULL))))) - (((((((/* implicit */val<bool>) (val<unsigned char>)128)) || (((/* implicit */val<bool>) (val<unsigned char>)127)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((7065220964528884323ULL) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)15443))))))) : (max((7065220964528884311ULL), (((/* implicit */val<unsigned long long int>) (val<unsigned short>)39721))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned long long int var_18 = 9901760595744872690ULL;
signed char var_19 = (signed char)100;
long long int var_20 = -8812772386937001630LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 124ULL;
    value_mismatch |= var_19 != (signed char)-4;
    value_mismatch |= var_20 != 5503760071655423999LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_18, &var_19, &var_20);
  checksum();
}
