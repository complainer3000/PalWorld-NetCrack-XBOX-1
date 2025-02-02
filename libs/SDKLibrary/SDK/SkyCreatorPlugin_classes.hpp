#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEF0 (0x1180 - 0x290)
// Class SkyCreatorPlugin.SkyCreator
class ASkyCreator : public AActor
{
public:
	class USceneComponent*                       Root;                                              // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBillboardComponent*                   Billboard;                                         // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  Compass;                                           // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkyAtmosphereComponent*               SkyAtmosphere;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVolumetricCloudComponent*             VolumetricCloud;                                   // 0x2B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkyLightComponent*                    SkyLight;                                          // 0x2B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDirectionalLightComponent*            SunLight;                                          // 0x2C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDirectionalLightComponent*            MoonLight;                                         // 0x2C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UExponentialHeightFogComponent*        ExponentialHeightFog;                              // 0x2D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPostProcessComponent*                 PostProcess;                                       // 0x2D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  StarMap;                                           // 0x2E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  SunSphere;                                         // 0x2E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  MoonSphere;                                        // 0x2F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneCaptureComponent2D*              OcclusionCapture;                                  // 0x2F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                     WeatherFX;                                         // 0x300(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  SkySphere;                                         // 0x308(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    SkySphereMaterial;                                 // 0x310(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              SkySphereMID;                                      // 0x318(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEditorTimeOfDay;                               // 0x320(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EditorTimeOfDay;                                   // 0x324(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEditorWeatherSettings;                         // 0x328(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESkyCreatorEditorWeatherType      EditorWeatherType;                                 // 0x329(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AFB[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USkyCreatorWeatherPreset*              EditorWeatherPreset;                               // 0x330(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkyCreatorWeatherSettings            EditorWeatherSettings;                             // 0x338(0x458)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsUsedWithSequencer;                              // 0x790(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEditorTickEnabled;                              // 0x791(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AFF[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeOfDay;                                         // 0x794(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkyCreatorWeatherSettings            WeatherSettings;                                   // 0x798(0x458)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditConst, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	class UMaterialParameterCollection*          CommonMPC;                                         // 0xBF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkySphereRadius;                                   // 0xBF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDebugVariables;                               // 0xBFC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESkyCreatorSunPositionType        SunPositionType;                                   // 0xBFD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B01[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCelestialPositionData                SunPositionData;                                   // 0xC00(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESkyCreatorMoonPositionType       MoonPositionType;                                  // 0xC08(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B04[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCelestialPositionData                MoonPositionData;                                  // 0xC0C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SunriseTime;                                       // 0xC14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunsetTime;                                        // 0xC18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunDawnOffsetTime;                                 // 0xC1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunDuskOffsetTime;                                 // 0xC20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunDawnTime;                                       // 0xC24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunDuskTime;                                       // 0xC28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunElevation;                                      // 0xC2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunAzimuth;                                        // 0xC30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunMinAngleAtDawnDusk;                             // 0xC34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunFadeInOutTime;                                  // 0xC38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonriseTime;                                      // 0xC3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonsetTime;                                       // 0xC40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonElevation;                                     // 0xC44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonAzimuth;                                       // 0xC48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonFadeInOutTime;                                 // 0xC4C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Latitude;                                          // 0xC50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Longitude;                                         // 0xC54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeZone;                                          // 0xC58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDaylightSavingTime;                               // 0xC5C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B13[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Year;                                              // 0xC60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Month;                                             // 0xC64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Day;                                               // 0xC68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B22[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             Date;                                              // 0xC70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLightTransition;                                  // 0xC78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B25[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SunSurfaceBrightness;                              // 0xC7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonSurfaceBrightness;                             // 0xC80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunCurrentElevation;                               // 0xC84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransitionStartSunAngle;                           // 0xC88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransitionMiddleSunAngle;                          // 0xC8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransitionEndSunAngle;                             // 0xC90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NightIntensityTransitionStartSunAngle;             // 0xC94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NightIntensityTransitionEndSunAngle;               // 0xC98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentMobility                SkyAtmosphereMobility;                             // 0xC9C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESkyAtmosphereTransformMode       TransformMode;                                     // 0xC9D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B34[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlanetRadius;                                      // 0xCA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AtmosphereHeight;                                  // 0xCA4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AerialPespectiveViewDistanceScale;                 // 0xCA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B3A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PlanetTopPosition;                                 // 0xCB0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceSampleCountScale;                             // 0xCC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GodRaysResolution;                                 // 0xCCC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LayerBottomAltitude;                               // 0xCD0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LayerHeight;                                       // 0xCD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TracingStartMaxDistance;                           // 0xCD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TracingMaxDistance;                                // 0xCDC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPerSampleAtmosphericLightTransmittance;           // 0xCE0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B3E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialParameterCollection*          VolumetricCloudsMPC;                               // 0xCE8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LayerBottomAltitudePosition;                       // 0xCF0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LayerTopAltitudePosition;                          // 0xD08(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    CurrentVolumetricCloudMaterial;                    // 0xD20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              VolumetricCloudMID;                                // 0xD28(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    VolumetricCloudDensitySampleMaterial;              // 0xD30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              VolumetricCloudDensitySampleMID;                   // 0xD38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                VolumetricCloudDensitySampleRT;                    // 0xD40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCinematicQuality;                                 // 0xD48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVolumetricCloudRenderTargetMode  RenderMode;                                        // 0xD49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHighQualityAerialPerspective;                     // 0xD4A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4E[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MultiScatteringApproximationOctaveCount;           // 0xD4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGroundContribution;                               // 0xD50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRayMarchVolumeShadow;                             // 0xD51(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B50[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ViewSampleCountScale;                              // 0xD54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReflectionSampleCountScale;                        // 0xD58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowViewSampleCountScale;                        // 0xD5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowReflectionSampleCountScale;                  // 0xD60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowTracingDistance;                             // 0xD64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloudMapScale;                                     // 0xD68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B54[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CloudMapOffset;                                    // 0xD70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CoverageVariationMapScale;                         // 0xD80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVolumetricCloudNoiseShapeResolution NoiseShapeResolution;                              // 0xD84(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVolumetricCloudNoiseDetailResolution NoiseDetailResolution;                             // 0xD85(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B58[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NoiseShapeScale;                                   // 0xD88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseDetailScale;                                  // 0xD8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurbulenceScale;                                   // 0xD90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BackgroundCloudsContrast;                          // 0xD94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BackgroundCloudsReflectionScale;                   // 0xD98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentMobility                SkyLightMobility;                                  // 0xD9C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRealTimeCapture;                                  // 0xD9D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkyLightCaptureTimeSlice;                         // 0xD9E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLowerHemisphereIsSolidColor;                      // 0xD9F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCloudAmbientOcclusion;                            // 0xDA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CloudAmbientOcclusionExtent;                       // 0xDA4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloudAmbientOcclusionMapResolutionScale;           // 0xDA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloudAmbientOcclusionApertureScale;                // 0xDAC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentMobility                SunLightMobility;                                  // 0xDB0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bControlSunDirection;                              // 0xDB1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSunConstantIntensity;                             // 0xDB2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5D[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SunIntensity;                                      // 0xDB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunCurrentIntensity;                               // 0xDB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSunUseTemperature;                                // 0xDBC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SunDiskSize;                                       // 0xDC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSunConstantAtmosphereDiskColorScale;              // 0xDC4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B60[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          SunAtmosphereDiskColorScale;                       // 0xDC8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSunPerPixelAtmosphereTransmittance;               // 0xDD8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B63[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SunCloudShadowExtent;                              // 0xDDC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunCloudShadowMapResolutionScale;                  // 0xDE0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunCloudShadowRaySampleCountScale;                 // 0xDE4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentMobility                MoonLightMobility;                                 // 0xDE8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bControlMoonDirection;                             // 0xDE9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoonConstantIntensity;                            // 0xDEA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B67[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MoonIntensity;                                     // 0xDEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonCurrentIntensity;                              // 0xDF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoonUseTemperature;                               // 0xDF4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MoonDiskSize;                                      // 0xDF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonRotation;                                      // 0xDFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonPhase;                                         // 0xE00(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoonPhaseLightIntensityScale;                     // 0xE04(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MoonPhaseLightIntensityMinScale;                   // 0xE08(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonPhaseLightIntensityMaxScale;                   // 0xE0C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoonConstantAtmosphereDiskColorScale;             // 0xE10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B70[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          MoonAtmosphereDiskColorScale;                      // 0xE14(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoonPerPixelAtmosphereTransmittance;              // 0xE24(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B75[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MoonCloudShadowExtent;                             // 0xE28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonCloudShadowMapResolutionScale;                 // 0xE2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoonCloudShadowRaySampleCountScale;                // 0xE30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentMobility                ExponentialHeightFogMobility;                      // 0xE34(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableExponentialHeightFog;                       // 0xE35(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVolumetricFog;                                    // 0xE36(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7A[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FogHeightOffset;                                   // 0xE38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondFogHeightOffset;                             // 0xE3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            StarMapTexture;                                    // 0xE40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESkyCreatorStarMapRotationType    StarMapRotationType;                               // 0xE48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B80[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StarMapAdditionalRotation;                         // 0xE50(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableOcclusionCapture;                           // 0xE68(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B83[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                OcclusionRenderTarget;                             // 0xE70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionCaptureWidth;                             // 0xE78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionCaptureHeight;                            // 0xE7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOcclusionCaptureRealtimeUpdate;                   // 0xE80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B88[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OcclusionCaptureStepDistance;                      // 0xE84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionCaptureStepSize;                          // 0xE88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionBias;                                     // 0xE8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OcclusionBlurSamples;                              // 0xE90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionBlurDistance;                             // 0xE94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionMaskFadeHardness;                         // 0xE98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CameraLocation;                                    // 0xEA0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CameraLocationSnapped;                             // 0xEB8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OcclusionCurrentLocation;                          // 0xED0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeatherFXCutoffWorldHeight;                        // 0xEE8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeatherFXCutoffSoftness;                           // 0xEEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrecipitationSpawnRadius;                          // 0xEF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableGPUPrecipitation;                           // 0xEF4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B97[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PrecipitationSpawnRadiusGPU;                       // 0xEF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrecipitationMaxViewDistance;                      // 0xEFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrecipitationVerticalCheckDistance;                // 0xF00(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 PrecipitationCollisionChannel;                     // 0xF04(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B99[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PrecipitationDepthFadeDistance;                    // 0xF08(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrecipitationCameraFadeDistance;                   // 0xF0C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrecipitationCameraFadeOffset;                     // 0xF10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainSpawnRateMaxCPU;                               // 0xF14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainSpawnRateMaxGPU;                               // 0xF18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainDistanceScaleFactor;                           // 0xF1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainCameraMotionAlignmentScale;                    // 0xF20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainVelocityElongationScale;                       // 0xF24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainMaskHardness;                                  // 0xF28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainSplashSpawnRateMax;                            // 0xF2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainSplashSpawnRateMaxGPU;                         // 0xF30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowSpawnRateMaxCPU;                               // 0xF34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowSpawnRateMaxGPU;                               // 0xF38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowDistanceScaleFactor;                           // 0xF3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowCameraMotionAlignmentScale;                    // 0xF40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowVelocityElongationScale;                       // 0xF44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowMaskHardness;                                  // 0xF48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                LightningsParametersRT;                            // 0xF50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSkyCreatorLightningParameters> LightningParameters;                               // 0xF58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentLightningInterval;                          // 0xF70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LastLightningPosition;                             // 0xF78(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       LightningAvailablePositions;                       // 0xF90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	int32                                        LightningCurrentIndex;                             // 0xFA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSampleCloudDensity;                               // 0xFA4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LightningMaxSamples;                               // 0xFA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightningSpawnInnerRadius;                         // 0xFAC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightningSpawnOuterRadius;                         // 0xFB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightningRandomDegreeInConeMax;                    // 0xFB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightningBoltEmissiveScale;                        // 0xFB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA7[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LightningFlashFadeUpdateRate;                      // 0xFC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightningFlashFadeDelta;                           // 0xFCC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightningFlashEmissiveScale;                       // 0xFD0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightningFlashEmissiveReflectionScale;             // 0xFD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightningFlashRadiusScale;                         // 0xFD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightningFlashFadeSpeed;                           // 0xFDC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainbowDistance;                                   // 0xFE0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainbowDepthFadeDistance;                          // 0xFE4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaterialFXCutoffWorldHeight;                       // 0xFE8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaterialFXCutoffSoftness;                          // 0xFEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WetnessSlopeAngle;                                 // 0xFF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WetnessSlopeSmoothness;                            // 0xFF4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PuddlesMaskScale;                                  // 0xFF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PuddlesRoughness;                                  // 0xFFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PuddlesSlopeAngle;                                 // 0x1000(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PuddlesSlopeSmoothness;                            // 0x1004(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRainRipplesSolver;                          // 0x1008(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPauseRainRipplesSolver;                           // 0x1009(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB5[0xE];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RainRipplesUpdateRate;                             // 0x1018(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainRipplesScale;                                  // 0x101C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainRipplesMaxDensity;                             // 0x1020(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindRipplesScale;                                  // 0x1024(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RainRipplesSolverDelta;                            // 0x1028(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RainRipplesSolverHeightState;                      // 0x102C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    RainRipplesPropagation;                            // 0x1030(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              RainRipplesPropagationMID;                         // 0x1038(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    RainRipplesForce;                                  // 0x1040(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    RainRipplesNormal;                                 // 0x1048(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              RainRipplesNormalMID;                              // 0x1050(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RainRipplesPropagationFrame0;                      // 0x1058(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RainRipplesPropagationFrame1;                      // 0x1060(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RainRipplesPropagationFrame2;                      // 0x1068(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RainRipplesNormalRT;                               // 0x1070(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowMaskScale;                                     // 0x1078(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowScale;                                         // 0x107C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowRoughness;                                     // 0x1080(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowSparklesScale;                                 // 0x1084(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowSparklesRoughness;                             // 0x1088(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowSlopeAngle;                                    // 0x108C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnowSlopeSmoothness;                               // 0x1090(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableWind;                                       // 0x1094(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIndependentWindControl;                           // 0x1095(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBC[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkyCreatorWindSettings               EditorIndependentWindSettings;                     // 0x1098(0x1C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CloudWindSkewAmount;                               // 0x10B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CloudWindOffset;                                   // 0x10B8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CloudWindSkewDirection;                            // 0x10D0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloudWindSkewForce;                                // 0x10E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CloudNoiseShapeWindOffset;                         // 0x10F0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CloudNoiseDetailWindOffset;                        // 0x1108(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseExposureSettings;                              // 0x1120(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExtendDefaultLuminanceRange;                      // 0x1121(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PostProcessPriority;                               // 0x1124(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAutoExposureMethod               ExposureMethod;                                    // 0x1128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           ExposureBiasCurve;                                 // 0x1130(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                              ExposureMeterMask;                                 // 0x1138(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureMinBrightness;                             // 0x1140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureMaxBrightness;                             // 0x1144(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureMinEV100;                                  // 0x1148(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureMaxEV100;                                  // 0x114C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureSpeedUp;                                   // 0x1150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureSpeedDown;                                 // 0x1154(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureLowPercent;                                // 0x1158(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureHighPercent;                               // 0x115C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureHistogramLogMin;                           // 0x1160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureHistogramLogMax;                           // 0x1164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureHistogramMinEV100;                         // 0x1168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExposureHistogramMaxEV100;                         // 0x116C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLightningStrike;                                 // 0x1170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASkyCreator* GetDefaultObj();

	void UpdateSettingsSequencer();
	void SpawnLightningStrike(const struct FVector& LightningPosition);
	void SetYear(int32 NewValue);
	void SetWindSettings(const struct FSkyCreatorWindSettings& InWindSettings);
	void SetWindIndependentSettings(const struct FSkyCreatorWindSettings& InWindSettings);
	void SetWeatherSettings(const struct FSkyCreatorWeatherSettings& InWeatherSettings);
	void SetWeatherMaterialFXSettings(const struct FSkyCreatorWeatherMaterialFXSettings& InWeatherMaterialFXSettings);
	void SetWeatherFXSettings(const struct FSkyCreatorWeatherFXSettings& InWeatherFXSettings);
	void SetVolumetricCloudSettings(const struct FSkyCreatorVolumetricCloudSettings& InVolumetricCloudSettings);
	void SetTimeZone(float NewValue);
	void SetTime(float InTime);
	void SetSunSimplePositionSettings(float InSunriseTime, float InSunsetTime, float InSunElevation, float InSunAzimuth);
	void SetSunsetTime(float NewValue);
	void SetSunriseTime(float NewValue);
	void SetSunMinAngleAtDawnDusk(float NewValue);
	void SetSunLightSettings(const struct FSkyCreatorSunLightSettings& InSunLightSettings);
	void SetSunIntensity(float NewValue);
	void SetSunElevation(float NewValue);
	void SetSunDuskOffsetTime(float NewValue);
	void SetSunDiskSize(float NewValue);
	void SetSunDawnOffsetTime(float NewValue);
	void SetSunAzimuth(float NewValue);
	void SetSunAtmosphereDiskColorScale(const struct FLinearColor& NewValue);
	void SetStarMapSettings(const struct FSkyCreatorStarMapSettings& InStarMapSettings);
	void SetStarMapAdditionalRotation(const struct FVector& NewValue);
	void SetSkyLightSettings(const struct FSkyCreatorSkyLightSettings& InSkyLightSettings);
	void SetSkyAtmosphereSettings(const struct FSkyCreatorSkyAtmosphereSettings& InSkyAtmosphereSettings);
	void SetRealPositionSettings(float InLatitude, float InLongitude, float InTimeZone, bool InbDaylightSavingTime, int32 InYear, int32 InMonth, int32 InDay);
	void SetPostProcessSettings(const struct FSkyCreatorPostProcessSettings& InPostProcessSettings);
	void SetMoonSimplePositionSettings(float InMoonriseTime, float InMoonsetTime, float InMoonElevation, float InMoonAzimuth);
	void SetMoonsetTime(float NewValue);
	void SetMoonRotation(float NewValue);
	void SetMoonriseTime(float NewValue);
	void SetMoonPhase(float NewValue);
	void SetMoonLightSettings(const struct FSkyCreatorMoonLightSettings& InMoonLightSettings);
	void SetMoonIntensity(float NewValue);
	void SetMoonElevation(float NewValue);
	void SetMoonDiskSize(float NewValue);
	void SetMoonAzimuth(float NewValue);
	void SetMoonAtmosphereDiskColorScale(const struct FLinearColor& NewValue);
	void SetMonth(int32 NewValue);
	void SetLongitude(float NewValue);
	void SetLayerHeight(float NewValue);
	void SetLayerBottomAltitude(float NewValue);
	void SetLatitude(float NewValue);
	void SetExponentialHeightFogSettings(const struct FSkyCreatorExponentialHeightFogSettings& InExponentialHeightFogSettings);
	void SetEditorWeatherSettings(const struct FSkyCreatorWeatherSettings& NewValue);
	void SetEditorWeatherPreset(class USkyCreatorWeatherPreset* NewValue);
	void SetEditorTimeOfDay(float NewValue);
	void SetDay(int32 NewValue);
	void SetCloudMapOffset(const struct FVector2D& NewValue);
	void SetbDaylightSavingTime(bool NewValue);
	void SetBackgroundCloudSettings(const struct FSkyCreatorBackgroundCloudSettings& InBackgroundCloudSettings);
	void RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration);
	void OnRep_UpdateWeather();
	void OnRep_UpdateTime();
	void LerpWindSettings(const struct FSkyCreatorWindSettings& InWindSettingsA, const struct FSkyCreatorWindSettings& InWindSettingsB, float Alpha);
	void LerpWindIndependentSettings(const struct FSkyCreatorWindSettings& InWindSettingsA, const struct FSkyCreatorWindSettings& InWindSettingsB, float Alpha);
	void LerpWetnessAmount(float WetnessAmountA, float WetnessAmountB, float Alpha);
	void LerpWeatherSettings(const struct FSkyCreatorWeatherSettings& InWeatherSettingsA, const struct FSkyCreatorWeatherSettings& InWeatherSettingsB, float Alpha);
	void LerpWeatherMaterialFXSettings(const struct FSkyCreatorWeatherMaterialFXSettings& InWeatherMaterialFXSettingsA, const struct FSkyCreatorWeatherMaterialFXSettings& InWeatherMaterialFXSettingsB, float Alpha);
	void LerpWeatherFXSettings(const struct FSkyCreatorWeatherFXSettings& InWeatherFXSettingsA, const struct FSkyCreatorWeatherFXSettings& InWeatherFXSettingsB, float Alpha);
	void LerpVolumetricCloudSettings(const struct FSkyCreatorVolumetricCloudSettings& InVolumetricCloudSettingsA, const struct FSkyCreatorVolumetricCloudSettings& InVolumetricCloudSettingsB, float Alpha);
	void LerpSunLightSettings(const struct FSkyCreatorSunLightSettings& InSunLightSettingsA, const struct FSkyCreatorSunLightSettings& InSunLightSettingsB, float Alpha);
	void LerpStarMapSettings(const struct FSkyCreatorStarMapSettings& InStarMapSettingsA, const struct FSkyCreatorStarMapSettings& InStarMapSettingsB, float Alpha);
	void LerpSnowAmount(float SnowAmountA, float SnowAmountB, float Alpha);
	void LerpSkyLightSettings(const struct FSkyCreatorSkyLightSettings& InSkyLightSettingsA, const struct FSkyCreatorSkyLightSettings& InSkyLightSettingsB, float Alpha);
	void LerpSkyAtmosphereSettings(const struct FSkyCreatorSkyAtmosphereSettings& InSkyAtmosphereSettingsA, const struct FSkyCreatorSkyAtmosphereSettings& InSkyAtmosphereSettingsB, float Alpha);
	void LerpPuddlesAmount(float PuddlesAmountA, float PuddlesAmountB, float Alpha);
	void LerpPostProcessSettings(const struct FSkyCreatorPostProcessSettings& InPostProcessSettingsA, const struct FSkyCreatorPostProcessSettings& InPostProcessSettingsB, float Alpha);
	void LerpMoonLightSettings(const struct FSkyCreatorMoonLightSettings& InMoonLightSettingsA, const struct FSkyCreatorMoonLightSettings& InMoonLightSettingsB, float Alpha);
	void LerpExponentialHeightFogSettings(const struct FSkyCreatorExponentialHeightFogSettings& InExponentialHeightFogSettingsA, const struct FSkyCreatorExponentialHeightFogSettings& InExponentialHeightFogSettingsB, float Alpha);
	void LerpBackgroundCloudSettings(const struct FSkyCreatorBackgroundCloudSettings& InBackgroundCloudSettingsA, const struct FSkyCreatorBackgroundCloudSettings& InBackgroundCloudSettingsB, float Alpha);
	struct FSkyCreatorWindSettings GetWindSettings();
	struct FSkyCreatorWeatherSettings GetWeatherSettings();
	struct FSkyCreatorWeatherMaterialFXSettings GetWeatherMaterialFXSettings();
	struct FSkyCreatorWeatherFXSettings GetWeatherFXSettings();
	struct FSkyCreatorVolumetricCloudSettings GetVolumetricCloudSettings();
	float GetTime();
	struct FRotator GetSunPosition(float Time);
	struct FSkyCreatorSunLightSettings GetSunLightSettings();
	struct FSkyCreatorStarMapSettings GetStarMapSettings();
	struct FRotator GetStarMapRotation();
	struct FSkyCreatorSkyLightSettings GetSkyLightSettings();
	struct FSkyCreatorSkyAtmosphereSettings GetSkyAtmosphereSettings();
	struct FSkyCreatorPostProcessSettings GetPostProcessSettings();
	struct FRotator GetMoonPosition(float Time);
	float GetMoonPhase();
	struct FSkyCreatorMoonLightSettings GetMoonLightSettings();
	struct FVector GetLastLightningPosition();
	struct FSkyCreatorExponentialHeightFogSettings GetExponentialHeightFogSettings();
	float GetCloudDensityAtPosition(const struct FVector& Position);
	struct FSkyCreatorBackgroundCloudSettings GetBackgroundCloudSettings();
	bool FindLightningPosition(const struct FVector& Position, struct FVector* OutPosition);
};

// 0x0 (0x28 - 0x28)
// Class SkyCreatorPlugin.SkyCreatorFunctionLibrary
class USkyCreatorFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USkyCreatorFunctionLibrary* GetDefaultObj();

	float KilometersToCentimeters(float Value);
	bool IsApplicationForegroundNow();
	struct FCelestialPositionData GetRealSunPosition(float Latitude, float Longitude, float TimeZone, bool bIsDaylightSavingTime, const struct FDateTime& DateTime);
	struct FCelestialPositionData GetRealMoonPosition(float Latitude, float Longitude, float TimeZone, bool bIsDaylightSavingTime, const struct FDateTime& DateTime);
	float GetCloudDensityAtPosition(class UObject* WorldContextObject, const struct FVector& Position, class UMaterialParameterCollection* ParameterCollection, class UMaterialInterface* Material, class UTextureRenderTarget2D* RenderTarget);
	bool FindLightningPosition(class UObject* WorldContextObject, bool bSampleCloudDensity, int32 Samples, class UMaterialParameterCollection* ParameterCollection, class UMaterialInterface* Material, class UTextureRenderTarget2D* RenderTarget, const struct FVector& Position, float InnerRadius, float OuterRadius, float MinHeight, float MaxHeight, float DensityThreshold, struct FVector* OutPosition);
	double ElevationRefraction(double F);
	class UTexture2D* DynamicConvertRenderTargetToTexture2D(class UTextureRenderTarget2D* RenderTarget);
	void CreateAndAssignMID(class UObject* WorldContextObject, class UMaterialInterface* InMaterial, class UMaterialInstanceDynamic** InMID);
	void ConvertRenderTargetToTexture2D(class UTextureRenderTarget2D* RenderTarget, class UTexture2D** Texture);
	bool CheckCloudDensityAtPosition(class UObject* WorldContextObject, const struct FVector& Position, class UMaterialParameterCollection* ParameterCollection, class UMaterialInterface* Material, class UTextureRenderTarget2D* RenderTarget);
	float CentimetersToKilometers(float Value);
};

// 0x470 (0x4A0 - 0x30)
// Class SkyCreatorPlugin.SkyCreatorWeatherPreset
class USkyCreatorWeatherPreset : public UDataAsset
{
public:
	class FText                                  Description;                                       // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSkyCreatorSkyAtmosphereSettings      SkyAtmosphereSettings;                             // 0x48(0x80)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorVolumetricCloudSettings    VolumetricCloudSettings;                           // 0xC8(0xA8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorBackgroundCloudSettings    BackgroundCloudSettings;                           // 0x170(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorSkyLightSettings           SkyLightSettings;                                  // 0x194(0x2C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorSunLightSettings           SunLightSettings;                                  // 0x1C0(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorMoonLightSettings          MoonLightSettings;                                 // 0x208(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorExponentialHeightFogSettings ExponentialHeightFogSettings;                      // 0x250(0x64)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorStarMapSettings            StarMapSettings;                                   // 0x2B4(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D31[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkyCreatorWeatherFXSettings          WeatherFXSettings;                                 // 0x300(0x110)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorWeatherMaterialFXSettings  WeatherMaterialFXSettings;                         // 0x410(0x68)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorWindSettings               WindSettings;                                      // 0x478(0x1C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FSkyCreatorPostProcessSettings        PostProcessSettings;                               // 0x494(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USkyCreatorWeatherPreset* GetDefaultObj();

	struct FSkyCreatorWeatherSettings GetWeatherPresetSettings();
};

}


