

#include <cstdint>
#include <string>
namespace Offsets {
    inline std::string ClientVersion = "version-4aeb17bd13994560";

    namespace AnimationTrack {
        inline constexpr uintptr_t Animation = 0xd0;
        inline constexpr uintptr_t Animator = 0x118;
        inline constexpr uintptr_t IsPlaying = 0x4f8;
        inline constexpr uintptr_t Looped = 0xf5;
        inline constexpr uintptr_t Speed = 0xe4;
    }

    namespace BasePart {
        inline constexpr uintptr_t AssemblyAngularVelocity = 0x134;
        inline constexpr uintptr_t AssemblyLinearVelocity = 0x128;
        inline constexpr uintptr_t Color3 = 0x194;
        inline constexpr uintptr_t Material = 0x260;
        inline constexpr uintptr_t Position = 0x11c;
        inline constexpr uintptr_t Primitive = 0x148;
        inline constexpr uintptr_t PrimitiveFlags = 0x28d;
        inline constexpr uintptr_t PrimitiveOwner = 0x208;
        inline constexpr uintptr_t Rotation = 0xf8;
        inline constexpr uintptr_t Shape = 0x1b1;
        inline constexpr uintptr_t Size = 0x1cc;
        inline constexpr uintptr_t Transparency = 0xf0;
        inline constexpr uintptr_t ValidatePrimitive = 0x6;
    }

    namespace ByteCode {
        inline constexpr uintptr_t Pointer = 0x10;
        inline constexpr uintptr_t Size = 0x20;
    }

    namespace Camera {
        inline constexpr uintptr_t CameraSubject = 0xe8;
        inline constexpr uintptr_t CameraType = 0x158;
        inline constexpr uintptr_t FieldOfView = 0x160;
        inline constexpr uintptr_t Position = 0x11c;
        inline constexpr uintptr_t Rotation = 0xf8;
    }

    namespace ClickDetector {
        inline constexpr uintptr_t MaxActivationDistance = 0x100;
        inline constexpr uintptr_t MouseIcon = 0xe0;
    }

    namespace DataModel {
        inline constexpr uintptr_t CreatorId = 0x188;
        inline constexpr uintptr_t GameId = 0x190;
        inline constexpr uintptr_t GameLoaded = 0x640;
        inline constexpr uintptr_t JobId = 0x138;
        inline constexpr uintptr_t PlaceId = 0x198;
        inline constexpr uintptr_t PlaceVersion = 0x1b4;
        inline constexpr uintptr_t PrimitiveCount = 0x480;
        inline constexpr uintptr_t ScriptContext = 0x3d0;
        inline constexpr uintptr_t ServerIP = 0x628;
        inline constexpr uintptr_t Workspace = 0x178;
    }

    namespace FakeDataModel {
        inline constexpr uintptr_t Pointer = 0x73a7088;
        inline constexpr uintptr_t RealDataModel = 0x1c0;
    }

    namespace GuiObject {
        inline constexpr uintptr_t BackgroundColor3 = 0x508;
        inline constexpr uintptr_t BorderColor3 = 0x514;
        inline constexpr uintptr_t Image = 0xa00;
        inline constexpr uintptr_t LayoutOrder = 0x544;
        inline constexpr uintptr_t Position = 0x4d8;
        inline constexpr uintptr_t RichText = 0xa98;
        inline constexpr uintptr_t Rotation = 0x188;
        inline constexpr uintptr_t ScreenGui_Enabled = 0x48c;
        inline constexpr uintptr_t Size = 0x4f8;
        inline constexpr uintptr_t Text = 0xdf8;
        inline constexpr uintptr_t TextColor3 = 0xea8;
        inline constexpr uintptr_t Visible = 0x571;
    }

    namespace Humanoid {
        inline constexpr uintptr_t AutoRotate = 0x1d9;
        inline constexpr uintptr_t Health = 0x194;
        inline constexpr uintptr_t HipHeight = 0x1a0;
        inline constexpr uintptr_t HumanoidState = 0x858;
        inline constexpr uintptr_t HumanoidStateID = 0x20;
        inline constexpr uintptr_t JumpHeight = 0x1ac;
        inline constexpr uintptr_t JumpPower = 0x1b0;
        inline constexpr uintptr_t MaxHealth = 0x1b4;
        inline constexpr uintptr_t MaxSlopeAngle = 0x1b8;
        inline constexpr uintptr_t RigType = 0x1c8;
        inline constexpr uintptr_t Walkspeed = 0x1d4;
        inline constexpr uintptr_t WalkspeedCheck = 0x3a0;
    }

    namespace Instance {
        inline constexpr uintptr_t AttributeContainer = 0x40;
        inline constexpr uintptr_t AttributeList = 0x18;
        inline constexpr uintptr_t AttributeToNext = 0x58;
        inline constexpr uintptr_t AttributeToValue = 0x18;
        inline constexpr uintptr_t ChildrenEnd = 0x8;
        inline constexpr uintptr_t ChildrenStart = 0x60;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t ClassName = 0x8;
        inline constexpr uintptr_t Name = 0x80;
        inline constexpr uintptr_t Parent = 0x50;
    }

    namespace Lighting {
        inline constexpr uintptr_t Ambient = 0xd8;
        inline constexpr uintptr_t Brightness = 0x120;
        inline constexpr uintptr_t ClockTime = 0x1b8;
        inline constexpr uintptr_t ColorShift_Bottom = 0xf0;
        inline constexpr uintptr_t ColorShift_Top = 0xe4;
        inline constexpr uintptr_t ExposureCompensation = 0x12c;
        inline constexpr uintptr_t FogColor = 0xfc;
        inline constexpr uintptr_t FogEnd = 0x134;
        inline constexpr uintptr_t FogStart = 0x138;
        inline constexpr uintptr_t GeographicLatitude = 0x190;
        inline constexpr uintptr_t OutdoorAmbient = 0x108;
    }

    namespace LocalScript {
        inline constexpr uintptr_t ByteCode = 0x1a8;
        inline constexpr uintptr_t Hash = 0x1b8;
    }

    namespace MeshPart {
        inline constexpr uintptr_t MeshId = 0x2e0;
        inline constexpr uintptr_t Texture = 0x310;
    }

    namespace Misc {
        inline constexpr uintptr_t Adornee = 0x108;
        inline constexpr uintptr_t AnimationId = 0xd0;
        inline constexpr uintptr_t StringLength = 0x10;
        inline constexpr uintptr_t Value = 0xd0;
    }

    namespace Model {
        inline constexpr uintptr_t PrimaryPart = 0x248;
        inline constexpr uintptr_t Scale = 0x154;
    }

    namespace ModuleScript {
        inline constexpr uintptr_t ByteCode = 0x150;
        inline constexpr uintptr_t Hash = 0x168;
    }

    namespace MouseService {
        inline constexpr uintptr_t InputObject = 0x100;
        inline constexpr uintptr_t MousePosition = 0xec;
        inline constexpr uintptr_t SensitivityPointer = 0x76780b0;
    }

    namespace Player {
        inline constexpr uintptr_t CameraMode = 0x2f8;
        inline constexpr uintptr_t Country = 0x110;
        inline constexpr uintptr_t DisplayName = 0x130;
        inline constexpr uintptr_t Gender = 0xe58;
        inline constexpr uintptr_t LocalPlayer = 0x130;
        inline constexpr uintptr_t MaxZoomDistance = 0x2f0;
        inline constexpr uintptr_t MinZoomDistance = 0x2f4;
        inline constexpr uintptr_t ModelInstance = 0x360;
        inline constexpr uintptr_t Mouse = 0xcc8;
        inline constexpr uintptr_t Team = 0x270;
        inline constexpr uintptr_t UserId = 0x298;
    }

    namespace PlayerMouse {
        inline constexpr uintptr_t Icon = 0xe0;
        inline constexpr uintptr_t Workspace = 0x168;
    }

    namespace PrimitiveFlags {
        inline constexpr uintptr_t Anchored = 0x2;
        inline constexpr uintptr_t CanCollide = 0x8;
        inline constexpr uintptr_t CanTouch = 0x10;
    }

    namespace ProximityPrompt {
        inline constexpr uintptr_t ActionText = 0xd0;
        inline constexpr uintptr_t Enabled = 0x156;
        inline constexpr uintptr_t GamepadKeyCode = 0x13c;
        inline constexpr uintptr_t HoldDuration = 0x140;
        inline constexpr uintptr_t KeyCode = 0x144;
        inline constexpr uintptr_t MaxActivationDistance = 0x148;
        inline constexpr uintptr_t ObjectText = 0xf0;
        inline constexpr uintptr_t RequiresLineOfSight = 0x157;
    }

    namespace RenderView {
        inline constexpr uintptr_t DeviceD3D11 = 0x8;
        inline constexpr uintptr_t FramebufferD3D11 = 0x690;
        inline constexpr uintptr_t TextureD3D11 = 0x680;
        inline constexpr uintptr_t VisualEngine = 0x10;
    }

    namespace RunService {
        inline constexpr uintptr_t HeartbeatFPS = 0xb8;
        inline constexpr uintptr_t HeartbeatTask = 0xf0;
    }

    namespace Sky {
        inline constexpr uintptr_t MoonAngularSize = 0x21c;
        inline constexpr uintptr_t MoonTextureId = 0xd8;
        inline constexpr uintptr_t SkyboxBk = 0x100;
        inline constexpr uintptr_t SkyboxDn = 0x128;
        inline constexpr uintptr_t SkyboxFt = 0x150;
        inline constexpr uintptr_t SkyboxLf = 0x178;
        inline constexpr uintptr_t SkyboxOrientation = 0x210;
        inline constexpr uintptr_t SkyboxRt = 0x1a0;
        inline constexpr uintptr_t SkyboxUp = 0x1c8;
        inline constexpr uintptr_t StarCount = 0x220;
        inline constexpr uintptr_t SunAngularSize = 0x214;
        inline constexpr uintptr_t SunTextureId = 0x1f0;
    }

    namespace SpecialMesh {
        inline constexpr uintptr_t MeshId = 0x108;
        inline constexpr uintptr_t Scale = 0x154;
    }

    namespace StatsItem {
        inline constexpr uintptr_t Value = 0xc8;
    }

    namespace TaskScheduler {
        inline constexpr uintptr_t FakeDataModelToDataModel = 0x1b0;
        inline constexpr uintptr_t JobEnd = 0x1d8;
        inline constexpr uintptr_t JobName = 0x18;
        inline constexpr uintptr_t JobStart = 0x1d0;
        inline constexpr uintptr_t MaxFPS = 0x1b0;
        inline constexpr uintptr_t Pointer = 0x778c0e8;
        inline constexpr uintptr_t RenderJobToFakeDataModel = 0x38;
        inline constexpr uintptr_t RenderJobToRenderView = 0x218;
    }

    namespace Team {
        inline constexpr uintptr_t BrickColor = 0xd0;
    }

    namespace Textures {
        inline constexpr uintptr_t Decal_Texture = 0x198;
        inline constexpr uintptr_t Texture_Texture = 0x198;
    }

    namespace VisualEngine {
        inline constexpr uintptr_t Dimensions = 0x720;
        inline constexpr uintptr_t Pointer = 0x7109240;
        inline constexpr uintptr_t ToDataModel1 = 0x700;
        inline constexpr uintptr_t ToDataModel2 = 0x1c0;
        inline constexpr uintptr_t ViewMatrix = 0x4b0;
    }

    namespace silent {
        inline constexpr uintptr_t FramePositionOffsetX = 0x4D4;
        inline constexpr uintptr_t FramePositionOffsetY = 0x4DC;
        inline constexpr uintptr_t FramePositionX = 0x4D0;
        inline constexpr uintptr_t FramePositionY = 0x4D8;
    }

    namespace Workspace {
        inline constexpr uintptr_t CurrentCamera = 0x410;
        inline constexpr uintptr_t DistributedGameTime = 0x430;
        inline constexpr uintptr_t Gravity = 0x1ac;
        inline constexpr uintptr_t GravityContainer = 0x398;
        inline constexpr uintptr_t PrimitivesPointer1 = 0x398;
        inline constexpr uintptr_t PrimitivesPointer2 = 0x210;
        inline constexpr uintptr_t ReadOnlyGravity = 0x958;
        inline constexpr uintptr_t ForceNewAFKDuration = 0x1F8;

    }

}