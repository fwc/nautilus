/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3336
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3336
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
void test(val<unsigned long long int> var_2, val<long long int> var_3, val<unsigned short> var_5, val<int> var_6, val<unsigned short> var_7, val<bool> var_8, val<int> zero, val<long long int*> var_10, val<int*> var_11) {
    *var_10 = ((((/* implicit */val<bool>) (+((((val<bool>)1) ? (((/* implicit */val<int>) (val<bool>)1)) : (var_6)))))) ? (var_3) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((var_2) / (((/* implicit */val<unsigned long long int>) var_6)))) >= (((((/* implicit */val<bool>) 1733564006U)) ? (var_2) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))))))))));
    *var_11 = ((/* implicit */val<int>) max((*var_11), (((/* implicit */val<int>) min((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_8)) <= ((~(((/* implicit */val<int>) var_5))))))), (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_7)) <= (((/* implicit */val<int>) var_5)))))) / (((683546593U) % (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)12))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3362541331006196438ULL;
long long int var_3 = 7333096621934077574LL;
unsigned short var_5 = (unsigned short)1473;
int var_6 = -2026558303;
unsigned short var_7 = (unsigned short)59734;
bool var_8 = (bool)1;
int zero = 0;
long long int var_10 = 6190024195021657393LL;
int var_11 = 1057511255;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 7333096621934077574LL;
    value_mismatch |= var_11 != 1057511255;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_6, var_7, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
