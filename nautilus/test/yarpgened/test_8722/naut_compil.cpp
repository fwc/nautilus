/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8722
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8722
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
void test(val<unsigned char> var_0, val<bool> var_1, val<signed char> var_2, val<int> var_3, val<unsigned char> var_4, val<bool> var_6, val<unsigned long long int> var_8, val<int> zero, val<int*> var_10, val<signed char*> var_11) {
    *var_10 = ((/* implicit */val<int>) max((*var_10), (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_8)) ? (((((/* implicit */val<bool>) var_3)) ? (((-4370492394353664913LL) * (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))))) : (((/* implicit */val<long long int>) var_3)))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) max((var_4), (((/* implicit */val<unsigned char>) (val<signed char>)-77))))) ? (((/* implicit */val<int>) max((var_0), (var_0)))) : (((/* implicit */val<int>) var_2))))))))));
    *var_11 ^= ((/* implicit */val<signed char>) ((((/* implicit */val<int>) min(((val<unsigned short>)25523), (((/* implicit */val<unsigned short>) ((var_3) < (((/* implicit */val<int>) (val<unsigned short>)61761)))))))) <= (((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) (!((val<bool>)1)))), (max((((/* implicit */val<unsigned char>) var_6)), ((val<unsigned char>)220))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)176;
bool var_1 = (bool)0;
signed char var_2 = (signed char)56;
int var_3 = -12323760;
unsigned char var_4 = (unsigned char)83;
bool var_6 = (bool)0;
unsigned long long int var_8 = 15182206043562313716ULL;
int zero = 0;
int var_10 = -1672256228;
signed char var_11 = (signed char)110;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 0;
    value_mismatch |= var_11 != (signed char)111;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_8, zero, &var_10, &var_11);
  checksum();
}
