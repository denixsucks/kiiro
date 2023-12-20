#pragma once
#include <string>

struct RendererSettings
{
  std::string appName;
};

class Renderer
{
  public:
    virtual void init(RendererSettings) = 0;
    virtual void shutdown() = 0;
    virtual void render() = 0;
};