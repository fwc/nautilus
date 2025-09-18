/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9396
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9396
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
void test(val<unsigned short> var_1, val<bool> var_3, val<unsigned long long int> var_4, val<long long int> var_5, val<bool> var_11, val<long long int> var_12, val<unsigned short> var_14, val<unsigned char> var_15, val<unsigned short> var_17, val<int> zero, val<int*> var_19, val<unsigned long long int*> var_20, val<unsigned long long int*> var_21) {
    *var_19 = ((/* implicit */val<int>) min((*var_19), (((/* implicit */val<int>) (-(((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_14)), (5442727209006901188LL)))) ? (-5442727209006901188LL) : (((/* implicit */val<long long int>) ((var_11) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_17))))))))))));
    *var_20 = min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((var_12) - (5442727209006901188LL)))) ? (var_5) : (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_14)) + (((/* implicit */val<int>) var_3)))))))), (min((((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_11))))), (min((var_4), (((/* implicit */val<unsigned long long int>) var_15)))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned long long int>) 169416591)) >= ((+(max((var_4), (((/* implicit */val<unsigned long long int>) var_1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44709;
bool var_3 = (bool)1;
unsigned long long int var_4 = 5807578114664946713ULL;
long long int var_5 = -4223844087916871014LL;
bool var_11 = (bool)1;
long long int var_12 = 591808677206655014LL;
unsigned short var_14 = (unsigned short)27735;
unsigned char var_15 = (unsigned char)179;
unsigned short var_17 = (unsigned short)8826;
int zero = 0;
int var_19 = 1363183162;
unsigned long long int var_20 = 13631470436090252409ULL;
unsigned long long int var_21 = 7109526427547365092ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1312139204;
    value_mismatch |= var_20 != 1ULL;
    value_mismatch |= var_21 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_11, var_12, var_14, var_15, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
}
