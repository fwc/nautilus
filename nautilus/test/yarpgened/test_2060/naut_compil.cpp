/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2060
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2060
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
void test(val<unsigned long long int> var_2, val<long long int> var_4, val<long long int> var_5, val<unsigned short> var_8, val<int> var_10, val<bool> var_11, val<int> zero, val<unsigned char*> var_12, val<int*> var_13) {
    *var_12 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) var_8)) << (max((((/* implicit */val<int>) ((var_2) <= (((/* implicit */val<unsigned long long int>) var_4))))), ((-(var_10)))))));
    *var_13 = ((/* implicit */val<int>) (-(max((((var_5) | (var_5))), (((/* implicit */val<long long int>) var_11))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5538157954230472233ULL;
long long int var_4 = 5901923839339801268LL;
long long int var_5 = -3013790001637935528LL;
unsigned short var_8 = (unsigned short)54943;
int var_10 = 1324753486;
bool var_11 = (bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)37;
int var_13 = 2091420355;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)62;
    value_mismatch |= var_13 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_8, var_10, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
