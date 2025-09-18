/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6118
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6118
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
void test(val<unsigned char> var_5, val<signed char> var_6, val<unsigned char> var_10, val<int> zero, val<unsigned char*> var_12, val<long long int*> var_13, val<int*> var_14) {
    *var_12 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) min((var_5), (((/* implicit */val<unsigned char>) ((-2729043862764210361LL) > (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))))))))) || (((/* implicit */val<bool>) ((val<unsigned char>) min((var_5), (var_10)))))));
    *var_13 = ((/* implicit */val<long long int>) var_6);
    *var_14 = ((/* implicit */val<int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)170;
signed char var_6 = (signed char)38;
unsigned char var_10 = (unsigned char)134;
int zero = 0;
unsigned char var_12 = (unsigned char)34;
long long int var_13 = -6669344536401658559LL;
int var_14 = -1163616675;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)1;
    value_mismatch |= var_13 != 38LL;
    value_mismatch |= var_14 != 134;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_10, zero, &var_12, &var_13, &var_14);
  checksum();
}
