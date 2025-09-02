/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9277
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9277
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
void test(val<unsigned char> var_0, val<long long int> var_2, val<unsigned int> var_3, val<int> var_6, val<unsigned char> var_7, val<unsigned long long int> var_9, val<int> zero, val<signed char*> var_11, val<unsigned short*> var_12, val<int*> var_13) {
    *var_11 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<int>) var_6))) ? (max((((/* implicit */val<unsigned long long int>) var_0)), (var_9))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) (val<unsigned char>)182)) : (((/* implicit */val<int>) (val<unsigned char>)64)))))))) ? (((/* implicit */val<int>) (val<unsigned short>)34155)) : (max((((/* implicit */val<int>) min(((val<unsigned short>)36754), (((/* implicit */val<unsigned short>) (val<unsigned char>)192))))), ((-(((/* implicit */val<int>) (val<unsigned char>)191))))))));
    *var_12 = ((/* implicit */val<unsigned short>) var_6);
    *var_13 = ((/* implicit */val<int>) ((var_9) + (((((/* implicit */val<bool>) var_2)) ? (min((var_9), (((/* implicit */val<unsigned long long int>) var_3)))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 4204187719U)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_0)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
long long int var_2 = 2298281670237290430LL;
unsigned int var_3 = 2976951437U;
int var_6 = -646753823;
unsigned char var_7 = (unsigned char)133;
unsigned long long int var_9 = 4136748909142844695ULL;
int zero = 0;
signed char var_11 = (signed char)-91;
unsigned short var_12 = (unsigned short)39382;
int var_13 = -641034493;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)107;
    value_mismatch |= var_12 != (unsigned short)20961;
    value_mismatch |= var_13 != -673033820;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_6, var_7, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
