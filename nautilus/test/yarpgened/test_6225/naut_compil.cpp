/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6225
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6225
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
void test(val<bool> var_0, val<bool> var_1, val<unsigned char> var_4, val<unsigned char> var_5, val<signed char> var_6, val<bool> var_7, val<bool> var_9, val<int> zero, val<unsigned short*> var_12, val<bool*> var_13) {
    *var_12 = ((/* implicit */val<unsigned short>) (((val<bool>)0) ? (((((/* implicit */val<bool>) max(((val<signed char>)0), (((/* implicit */val<signed char>) var_7))))) ? (((/* implicit */val<int>) max((var_5), (((/* implicit */val<unsigned char>) var_9))))) : (((/* implicit */val<int>) ((val<signed char>) var_7))))) : (((((/* implicit */val<int>) max((var_4), (((/* implicit */val<unsigned char>) var_6))))) ^ (((((/* implicit */val<bool>) (val<unsigned short>)26489)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1))))))));
    *var_13 = ((/* implicit */val<bool>) max((min(((+(((/* implicit */val<int>) var_7)))), (((((/* implicit */val<bool>) (val<signed char>)3)) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) var_1)))))), (((((/* implicit */val<int>) min(((val<signed char>)-1), (var_6)))) / (((var_0) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<signed char>)111))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
bool var_1 = (bool)0;
unsigned char var_4 = (unsigned char)165;
unsigned char var_5 = (unsigned char)34;
signed char var_6 = (signed char)17;
bool var_7 = (bool)1;
bool var_9 = (bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)25600;
bool var_13 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)164;
    value_mismatch |= var_13 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_6, var_7, var_9, zero, &var_12, &var_13);
  checksum();
}
