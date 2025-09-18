/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1744
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1744
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
void test(val<int> var_1, val<unsigned int> var_3, val<unsigned long long int> var_6, val<signed char> var_9, val<unsigned char> var_10, val<unsigned int> var_11, val<signed char> var_15, val<short> var_17, val<int> zero, val<signed char*> var_18, val<signed char*> var_19, val<short*> var_20, val<signed char*> var_21, val<unsigned char*> var_22) {
    *var_18 = var_15;
    *var_19 &= ((/* implicit */val<signed char>) (+(var_11)));
    *var_20 = ((/* implicit */val<short>) min((((/* implicit */val<unsigned long long int>) var_9)), (max((((val<unsigned long long int>) var_17)), (min((((/* implicit */val<unsigned long long int>) var_17)), (var_6)))))));
    *var_21 -= ((val<signed char>) var_10);
    *var_22 *= ((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) 866642214U)) ? (((/* implicit */val<int>) (val<unsigned char>)241)) : (var_1))) << (((((var_3) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!((val<bool>)1))))))) - (4160100453U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1601521933;
unsigned int var_3 = 4160100469U;
unsigned long long int var_6 = 14665325441332897967ULL;
signed char var_9 = (signed char)14;
unsigned char var_10 = (unsigned char)181;
unsigned int var_11 = 1291685001U;
signed char var_15 = (signed char)110;
short var_17 = (short)-19952;
int zero = 0;
signed char var_18 = (signed char)98;
signed char var_19 = (signed char)-54;
short var_20 = (short)30643;
signed char var_21 = (signed char)106;
unsigned char var_22 = (unsigned char)151;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)110;
    value_mismatch |= var_19 != (signed char)-120;
    value_mismatch |= var_20 != (short)14;
    value_mismatch |= var_21 != (signed char)-75;
    value_mismatch |= var_22 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_9, var_10, var_11, var_15, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
