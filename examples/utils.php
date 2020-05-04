<?php

function SetModelMaterialTexture($model, $materialIdx, $mapIdx, $texture)
{
    $materials = $model->materials;
    $material = $materials[0];
    SetMaterialTexture($material, $mapIdx, $texture);
    $materials[0] = $material;
    $model->materials = $materials;
}

function SetModelMaterialShader($model, $materialIdx, $shader)
{
    $materials = $model->materials;
    $material = $materials[$materialIdx];
    $material->shader = $shader;
    $materials[0] = $material;
    $model->materials = $materials;
}

function SetShaderLoc($shader, $idx, $loc)
{
    $locs = $shader->locs;
    $locs[$idx] = $loc;
    $shader->locs = $locs;
}
