/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7204
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7204
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
void test(val<long long int> var_4, val<unsigned short> var_13, val<unsigned char> var_14, val<int> zero, val<unsigned char*> var_18, val<long long int*> var_19, val<unsigned char*> var_20) {
    *var_18 = ((/* implicit */val<unsigned char>) min((var_4), (((/* implicit */val<long long int>) var_14))));
    *var_19 = ((/* implicit */val<long long int>) var_13);
    *var_20 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-96))) / (7357245859109475324ULL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 234424938158755225LL;
unsigned short var_13 = (unsigned short)58934;
unsigned char var_14 = (unsigned char)8;
int zero = 0;
unsigned char var_18 = (unsigned char)138;
long long int var_19 = 7834947014361484918LL;
unsigned char var_20 = (unsigned char)227;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)8;
    value_mismatch |= var_19 != 58934LL;
    value_mismatch |= var_20 != (unsigned char)2;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_13, var_14, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
