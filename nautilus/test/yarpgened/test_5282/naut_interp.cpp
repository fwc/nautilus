/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5282
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5282
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
void test(val<unsigned short> var_0, val<signed char> var_1, val<unsigned long long int> var_3, val<signed char> var_6, val<long long int> var_10, val<unsigned long long int> var_11, val<bool> var_12, val<unsigned short> var_13, val<long long int> var_15, val<long long int> var_17, val<int> zero, val<long long int*> var_18, val<unsigned short*> var_19, val<int*> var_20) {
    *var_18 ^= ((var_10) & (((/* implicit */val<long long int>) ((((/* implicit */val<int>) min((var_6), (var_1)))) + (((/* implicit */val<int>) max(((val<unsigned short>)12757), (((/* implicit */val<unsigned short>) (val<bool>)1)))))))));
    *var_19 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<int>) var_13)) < (((/* implicit */val<int>) ((var_11) >= (var_3)))))) && (((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_0)) >> (((/* implicit */val<int>) var_12))))) && (((((/* implicit */val<bool>) var_10)) || (((/* implicit */val<bool>) var_17))))))));
    *var_20 = ((/* implicit */val<int>) min((*var_20), (((/* implicit */val<int>) var_15))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23391;
signed char var_1 = (signed char)108;
unsigned long long int var_3 = 448895375530479555ULL;
signed char var_6 = (signed char)94;
long long int var_10 = 6554418578883158859LL;
unsigned long long int var_11 = 18318777017098524094ULL;
bool var_12 = (bool)0;
unsigned short var_13 = (unsigned short)8901;
long long int var_15 = 8591058968486936451LL;
long long int var_17 = -646326676394711321LL;
int zero = 0;
long long int var_18 = 3060133231475807886LL;
unsigned short var_19 = (unsigned short)18042;
int var_20 = -1799660021;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 3060133231475815565LL;
    value_mismatch |= var_19 != (unsigned short)0;
    value_mismatch |= var_20 != -1799660021;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_6, var_10, var_11, var_12, var_13, var_15, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
}
