#pragma once
#include "uDwmBackdrop.hpp"

namespace MDWMBlurGlassExt::BackdropFactory
{
	wuc::CompositionBrush GetOrCreateBackdropBrush(
		const wuc::Compositor& compositor,
		DWORD color,
		bool active,
		DWM::ACCENT_POLICY* policy = nullptr
	);
	std::chrono::steady_clock::time_point GetBackdropBrushTimeStamp();

	wuc::CompositionBrush GetOrCreateFeatherMaskBrush(const wuc::Compositor& compositor);

	void Shutdown();

	void RefreshConfig();
}