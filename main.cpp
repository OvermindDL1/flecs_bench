#include "flecs.h"

#define NONIUS_RUNNER // Define a `main` for us here, could do it ourselves and
                      // call into nonius, but why bother...
#include "nonius.hpp"

typedef struct {
  float value;
} Comp_A;
typedef struct {
  float value;
} Comp_B;
typedef struct {
  float value;
} Comp_C;
typedef struct {
  float value;
} Comp_D;
typedef struct {
  float value;
} Comp_E;
typedef struct {
  float value;
} Comp_F;
typedef struct {
  float value;
} Comp_G;
typedef struct {
  float value;
} Comp_H;

typedef struct {
  float value;
} Comp_I;
typedef struct {
  float value;
} Comp_J;
typedef struct {
  float value;
} Comp_K;
typedef struct {
  float value;
} Comp_L;
typedef struct {
  float value;
} Comp_M;
typedef struct {
  float value;
} Comp_N;
typedef struct {
  float value;
} Comp_O;
typedef struct {
  float value;
} Comp_P;

typedef struct {
  float value;
} Comp_Q;

ECS_COMPONENT_DECLARE(Comp_A);
ECS_COMPONENT_DECLARE(Comp_B);
ECS_COMPONENT_DECLARE(Comp_C);
ECS_COMPONENT_DECLARE(Comp_D);
ECS_COMPONENT_DECLARE(Comp_E);
ECS_COMPONENT_DECLARE(Comp_F);
ECS_COMPONENT_DECLARE(Comp_G);
ECS_COMPONENT_DECLARE(Comp_H);

ECS_COMPONENT_DECLARE(Comp_I);
ECS_COMPONENT_DECLARE(Comp_J);
ECS_COMPONENT_DECLARE(Comp_K);
ECS_COMPONENT_DECLARE(Comp_L);
ECS_COMPONENT_DECLARE(Comp_M);
ECS_COMPONENT_DECLARE(Comp_N);
ECS_COMPONENT_DECLARE(Comp_O);
ECS_COMPONENT_DECLARE(Comp_P);

ECS_COMPONENT_DECLARE(Comp_Q);

ECS_TAG_DECLARE(Tag_A);
ECS_TAG_DECLARE(Tag_B);
ECS_TAG_DECLARE(Tag_C);
ECS_TAG_DECLARE(Tag_D);
ECS_TAG_DECLARE(Tag_E);
ECS_TAG_DECLARE(Tag_F);
ECS_TAG_DECLARE(Tag_G);
ECS_TAG_DECLARE(Tag_H);

ECS_TAG_DECLARE(Tag_I);
ECS_TAG_DECLARE(Tag_J);
ECS_TAG_DECLARE(Tag_K);
ECS_TAG_DECLARE(Tag_L);
ECS_TAG_DECLARE(Tag_M);
ECS_TAG_DECLARE(Tag_N);
ECS_TAG_DECLARE(Tag_O);
ECS_TAG_DECLARE(Tag_P);

ECS_TYPE_DECLARE(Type4);
ECS_TYPE_DECLARE(Type8);
ECS_TYPE_DECLARE(Type16);

ECS_TYPE_DECLARE(TagType4);
ECS_TYPE_DECLARE(TagType8);
ECS_TYPE_DECLARE(TagType16);

ECS_TYPE_DECLARE(TypeAll);

ECS_CTOR(Comp_A, ptr, { ptr->value = 0; });

ECS_COPY(Comp_A, dst, src, { dst->value = src->value; });

static void Sys_A(ecs_iter_t *it) {}
static void Sys_B(ecs_iter_t *it) {}
static void Sys_C(ecs_iter_t *it) {}
static void Sys_D(ecs_iter_t *it) {}
static void Sys_E(ecs_iter_t *it) {}
static void Sys_F(ecs_iter_t *it) {}
static void Sys_G(ecs_iter_t *it) {}
static void Sys_H(ecs_iter_t *it) {}

static void Sys_I(ecs_iter_t *it) {}
static void Sys_J(ecs_iter_t *it) {}
static void Sys_K(ecs_iter_t *it) {}
static void Sys_L(ecs_iter_t *it) {}
static void Sys_M(ecs_iter_t *it) {}
static void Sys_N(ecs_iter_t *it) {}
static void Sys_O(ecs_iter_t *it) {}
static void Sys_P(ecs_iter_t *it) {}

static ecs_world_t *world_init() {
  ecs_world_t *w = ecs_init();

  ECS_COMPONENT_DEFINE(w, Comp_A);
  ECS_COMPONENT_DEFINE(w, Comp_B);
  ECS_COMPONENT_DEFINE(w, Comp_C);
  ECS_COMPONENT_DEFINE(w, Comp_D);
  ECS_COMPONENT_DEFINE(w, Comp_E);
  ECS_COMPONENT_DEFINE(w, Comp_F);
  ECS_COMPONENT_DEFINE(w, Comp_G);
  ECS_COMPONENT_DEFINE(w, Comp_H);
  ECS_COMPONENT_DEFINE(w, Comp_I);

  ECS_COMPONENT_DEFINE(w, Comp_J);
  ECS_COMPONENT_DEFINE(w, Comp_K);
  ECS_COMPONENT_DEFINE(w, Comp_L);
  ECS_COMPONENT_DEFINE(w, Comp_M);
  ECS_COMPONENT_DEFINE(w, Comp_N);
  ECS_COMPONENT_DEFINE(w, Comp_O);
  ECS_COMPONENT_DEFINE(w, Comp_P);

  ECS_COMPONENT_DEFINE(w, Comp_Q);

  ECS_TAG_DEFINE(w, Tag_A);
  ECS_TAG_DEFINE(w, Tag_B);
  ECS_TAG_DEFINE(w, Tag_C);
  ECS_TAG_DEFINE(w, Tag_D);
  ECS_TAG_DEFINE(w, Tag_E);
  ECS_TAG_DEFINE(w, Tag_F);
  ECS_TAG_DEFINE(w, Tag_G);
  ECS_TAG_DEFINE(w, Tag_H);

  ECS_TAG_DEFINE(w, Tag_I);
  ECS_TAG_DEFINE(w, Tag_J);
  ECS_TAG_DEFINE(w, Tag_K);
  ECS_TAG_DEFINE(w, Tag_L);
  ECS_TAG_DEFINE(w, Tag_M);
  ECS_TAG_DEFINE(w, Tag_N);
  ECS_TAG_DEFINE(w, Tag_O);
  ECS_TAG_DEFINE(w, Tag_P);

  ECS_TYPE_DEFINE(w, Type4, Comp_A, Comp_B, Comp_C, Comp_D);
  ECS_TYPE_DEFINE(w, Type8, Comp_A, Comp_B, Comp_C, Comp_D, Comp_E, Comp_F,
                  Comp_G, Comp_H);
  ECS_TYPE_DEFINE(w, Type16, Comp_A, Comp_B, Comp_C, Comp_D, Comp_E, Comp_F,
                  Comp_G, Comp_H, Comp_I, Comp_J, Comp_K, Comp_L, Comp_M,
                  Comp_N, Comp_O, Comp_P);

  ECS_TYPE_DEFINE(w, TagType4, Tag_A, Tag_B, Tag_C, Tag_D);
  ECS_TYPE_DEFINE(w, TagType8, Tag_A, Tag_B, Tag_C, Tag_D, Tag_E, Tag_F, Tag_G,
                  Tag_H);
  ECS_TYPE_DEFINE(w, TagType16, Tag_A, Tag_B, Tag_C, Tag_D, Tag_E, Tag_F, Tag_G,
                  Tag_H, Tag_I, Tag_J, Tag_K, Tag_L, Tag_M, Tag_N, Tag_O,
                  Tag_P);

  ECS_TYPE_DEFINE(w, TypeAll, AND | Type16, AND | TagType16);

  return w;
}

void create_recycled_entities(ecs_world_t *world, int32_t count) {
  const ecs_entity_t *ids_tmp = ecs_bulk_new(world, 0, count);
  ecs_entity_t *ids = (ecs_entity_t *)malloc(sizeof(ecs_entity_t) * count);
  memcpy(ids, ids_tmp, sizeof(ecs_entity_t) * count);
  for (int i = 0; i < count; i++) {
    ecs_delete(world, ids[i]);
  }
  ecs_os_free(ids);
}

NONIUS_BENCHMARK("flecs_new_id", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();

  ecs_dim(world, meter.runs());

  // We return it to black box the value so it doesn't optimize out, this way
  // we don't have to perform our own black_boxing as nonius does it for us.
  meter.measure([&world] { return ecs_new_id(world); });

  ecs_fini(world);
});

NONIUS_BENCHMARK("flecs_new_id_recycle", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();

  ecs_dim(world, meter.runs());

  create_recycled_entities(world, meter.runs());

  meter.measure([&world] { return ecs_new_id(world); });

  ecs_fini(world);
});

NONIUS_BENCHMARK("flecs_new_w_entity", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();

  ecs_dim(world, meter.runs());
  ecs_dim_type(world, ecs_type(Comp_A), meter.runs());

  meter.measure(
      [&world] { return ecs_new_w_entity(world, ecs_entity(Comp_A)); });

  ecs_fini(world);
});

NONIUS_BENCHMARK("flecs_new_1_comp", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();

  ecs_dim(world, meter.runs());
  ecs_dim_type(world, ecs_type(Comp_A), meter.runs());

  meter.measure([&world] { ecs_new(world, Comp_A); });

  ecs_fini(world);
});

void flecs_new_n_comp(nonius::chronometer meter, ecs_world_t *world,
                      ecs_type_t type) {
  ecs_dim(world, meter.runs());
  ecs_dim_type(world, type, meter.runs());

  meter.measure([&world, type] { ecs_new_w_type(world, type); });

  ecs_fini(world);
}

NONIUS_BENCHMARK("flecs_new_4_comp", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();
  flecs_new_n_comp(meter, world, ecs_type(Type4));
});

NONIUS_BENCHMARK("flecs_new_8_comp", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();
  flecs_new_n_comp(meter, world, ecs_type(Type8));
});

NONIUS_BENCHMARK("flecs_new_16_comp", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();
  flecs_new_n_comp(meter, world, ecs_type(Type16));
});


