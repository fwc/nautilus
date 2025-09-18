/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3250
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3250
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
void test(val<unsigned long long int> var_0, val<unsigned long long int> var_5, val<long long int> var_9, val<int> zero, val<unsigned char*> var_10, val<unsigned char*> var_11, val<short*> var_12) {
    *var_10 = ((/* implicit */val<unsigned char>) var_9);
    *var_11 = ((/* implicit */val<unsigned char>) var_0);
    *var_12 = ((/* implicit */val<short>) min(((!(((((/* implicit */val<bool>) -2547978728962611423LL)) && (((/* implicit */val<bool>) var_0)))))), ((!(((/* implicit */val<bool>) var_5))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5800508675544580082ULL;
unsigned long long int var_5 = 15311921803554988763ULL;
long long int var_9 = 1382389075618164592LL;
int zero = 0;
unsigned char var_10 = (unsigned char)84;
unsigned char var_11 = (unsigned char)45;
short var_12 = (short)-204;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)112;
    value_mismatch |= var_11 != (unsigned char)242;
    value_mismatch |= var_12 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
}
