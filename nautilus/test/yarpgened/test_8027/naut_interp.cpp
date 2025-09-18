/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8027
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8027
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
void test(val<unsigned char> var_4, val<unsigned char> var_6, val<unsigned int> var_7, val<int> zero, val<unsigned short*> var_10, val<long long int*> var_11, val<long long int*> var_12) {
    *var_10 ^= ((/* implicit */val<unsigned short>) var_7);
    *var_11 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_4)) <= (((/* implicit */val<int>) var_4))));
    *var_12 = ((/* implicit */val<long long int>) min((*var_12), (((/* implicit */val<long long int>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)20;
unsigned char var_6 = (unsigned char)242;
unsigned int var_7 = 2794707635U;
int zero = 0;
unsigned short var_10 = (unsigned short)43092;
long long int var_11 = -6240877857675744094LL;
long long int var_12 = -2301697351540286404LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)29415;
    value_mismatch |= var_11 != 1LL;
    value_mismatch |= var_12 != -2301697351540286404LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_7, zero, &var_10, &var_11, &var_12);
  checksum();
}
