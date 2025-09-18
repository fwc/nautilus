/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3005
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3005
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
void test(val<long long int> var_0, val<signed char> var_2, val<unsigned int> var_3, val<long long int> var_5, val<unsigned short> var_8, val<unsigned char> var_10, val<signed char> var_11, val<int> var_15, val<long long int> var_17, val<int> zero, val<long long int*> var_19, val<long long int*> var_20, val<unsigned long long int*> var_21, val<int*> var_22) {
    *var_19 = max((var_17), (((/* implicit */val<long long int>) var_11)));
    *var_20 = ((/* implicit */val<long long int>) var_15);
    *var_21 = ((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<int>) var_10)) << (((max((var_0), (-12LL))) + (23LL))))), ((~(((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_8))))))));
    *var_22 = ((/* implicit */val<int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3500302565863776087LL;
signed char var_2 = (signed char)79;
unsigned int var_3 = 1577124971U;
long long int var_5 = 602173792971516481LL;
unsigned short var_8 = (unsigned short)14269;
unsigned char var_10 = (unsigned char)136;
signed char var_11 = (signed char)33;
int var_15 = -207267289;
long long int var_17 = 5992917688751431029LL;
int zero = 0;
long long int var_19 = 8552105413536381687LL;
long long int var_20 = -2763349151686693471LL;
unsigned long long int var_21 = 8550319869798841131ULL;
int var_22 = 1235948421;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 5992917688751431029LL;
    value_mismatch |= var_20 != -207267289LL;
    value_mismatch |= var_21 != 278528ULL;
    value_mismatch |= var_22 != 1577124971;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_8, var_10, var_11, var_15, var_17, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
