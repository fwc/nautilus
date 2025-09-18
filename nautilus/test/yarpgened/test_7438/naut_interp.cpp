/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7438
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7438
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
void test(val<int> var_3, val<int> var_6, val<unsigned char> var_8, val<int> zero, val<unsigned int*> var_16, val<unsigned char*> var_17, val<long long int*> var_18) {
    *var_16 = ((/* implicit */val<unsigned int>) min((*var_16), (((/* implicit */val<unsigned int>) var_3))));
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<bool>) 4046596299U)) ? (2619283623470227559LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)133))))))) / (((((/* implicit */val<bool>) (+(var_6)))) ? (var_6) : (((((/* implicit */val<bool>) 2058152805)) ? (((/* implicit */val<int>) var_8)) : (var_6)))))));
    *var_18 = ((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1925104568;
int var_6 = 1163371810;
unsigned char var_8 = (unsigned char)107;
int zero = 0;
unsigned int var_16 = 3769455876U;
unsigned char var_17 = (unsigned char)58;
long long int var_18 = -542667044827123382LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1925104568U;
    value_mismatch |= var_17 != (unsigned char)0;
    value_mismatch |= var_18 != -107LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_8, zero, &var_16, &var_17, &var_18);
  checksum();
}
