/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9221
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9221
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
void test(val<int> var_0, val<long long int> var_2, val<bool> var_5, val<unsigned int> var_6, val<signed char> var_7, val<unsigned short> var_9, val<long long int> var_11, val<unsigned long long int> var_12, val<int> zero, val<unsigned short*> var_13, val<unsigned short*> var_14) {
    *var_13 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) min((var_11), (((/* implicit */val<long long int>) var_6))))) ? (((/* implicit */val<unsigned long long int>) (((!(((/* implicit */val<bool>) var_2)))) ? (max((var_0), (-1205044834))) : (((/* implicit */val<int>) var_9))))) : (((max((var_12), (((/* implicit */val<unsigned long long int>) var_7)))) << (((var_11) - (2955107682411880478LL)))))));
    *var_14 = ((/* implicit */val<unsigned short>) max((*var_14), (((/* implicit */val<unsigned short>) ((var_6) >> ((-(((/* implicit */val<int>) var_5)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -782922798;
long long int var_2 = 258153219215201617LL;
bool var_5 = (bool)0;
unsigned int var_6 = 2452716753U;
signed char var_7 = (signed char)-117;
unsigned short var_9 = (unsigned short)3841;
long long int var_11 = 2955107682411880524LL;
unsigned long long int var_12 = 810775875840955366ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)38350;
unsigned short var_14 = (unsigned short)44737;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)3841;
    value_mismatch |= var_14 != (unsigned short)44737;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_6, var_7, var_9, var_11, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
