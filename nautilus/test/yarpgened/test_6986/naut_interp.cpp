/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6986
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6986
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
void test(val<unsigned long long int> var_0, val<int> var_3, val<unsigned char> var_5, val<unsigned char> var_6, val<unsigned long long int> var_8, val<int> zero, val<bool*> var_11, val<int*> var_12, val<int*> var_13, val<unsigned int*> var_14, val<unsigned int*> var_15) {
    *var_11 |= ((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) (val<signed char>)38)), (2080768U)));
    *var_12 = ((/* implicit */val<int>) var_8);
    *var_13 = var_3;
    *var_14 = ((/* implicit */val<unsigned int>) 314594335478427020ULL);
    *var_15 += ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((974964544U), (((/* implicit */val<unsigned int>) var_5))))) ? (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) var_5)), (max((var_3), (((/* implicit */val<int>) var_6))))))) : ((-((+(var_0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13079929580318946357ULL;
int var_3 = 708855933;
unsigned char var_5 = (unsigned char)30;
unsigned char var_6 = (unsigned char)185;
unsigned long long int var_8 = 10682276718090039886ULL;
int zero = 0;
bool var_11 = (bool)1;
int var_12 = -2105878226;
int var_13 = 850046324;
unsigned int var_14 = 1223957909U;
unsigned int var_15 = 3352675349U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != -164711858;
    value_mismatch |= var_13 != 708855933;
    value_mismatch |= var_14 != 2659888524U;
    value_mismatch |= var_15 != 4061531282U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_6, var_8, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
