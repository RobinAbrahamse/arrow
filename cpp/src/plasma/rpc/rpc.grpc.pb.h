// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: rpc.proto
#ifndef GRPC_rpc_2eproto__INCLUDED
#define GRPC_rpc_2eproto__INCLUDED

#include "rpc.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace plasmaRPC {

class RemoteObjectShare final {
 public:
  static constexpr char const* service_full_name() {
    return "plasmaRPC.RemoteObjectShare";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status GetObjects(::grpc::ClientContext* context, const ::plasmaRPC::ObjectIDs& request, ::plasmaRPC::ObjectDetailsList* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::plasmaRPC::ObjectDetailsList>> AsyncGetObjects(::grpc::ClientContext* context, const ::plasmaRPC::ObjectIDs& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::plasmaRPC::ObjectDetailsList>>(AsyncGetObjectsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::plasmaRPC::ObjectDetailsList>> PrepareAsyncGetObjects(::grpc::ClientContext* context, const ::plasmaRPC::ObjectIDs& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::plasmaRPC::ObjectDetailsList>>(PrepareAsyncGetObjectsRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void GetObjects(::grpc::ClientContext* context, const ::plasmaRPC::ObjectIDs* request, ::plasmaRPC::ObjectDetailsList* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetObjects(::grpc::ClientContext* context, const ::plasmaRPC::ObjectIDs* request, ::plasmaRPC::ObjectDetailsList* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetObjects(::grpc::ClientContext* context, const ::plasmaRPC::ObjectIDs* request, ::plasmaRPC::ObjectDetailsList* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::plasmaRPC::ObjectDetailsList>* AsyncGetObjectsRaw(::grpc::ClientContext* context, const ::plasmaRPC::ObjectIDs& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::plasmaRPC::ObjectDetailsList>* PrepareAsyncGetObjectsRaw(::grpc::ClientContext* context, const ::plasmaRPC::ObjectIDs& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status GetObjects(::grpc::ClientContext* context, const ::plasmaRPC::ObjectIDs& request, ::plasmaRPC::ObjectDetailsList* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::plasmaRPC::ObjectDetailsList>> AsyncGetObjects(::grpc::ClientContext* context, const ::plasmaRPC::ObjectIDs& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::plasmaRPC::ObjectDetailsList>>(AsyncGetObjectsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::plasmaRPC::ObjectDetailsList>> PrepareAsyncGetObjects(::grpc::ClientContext* context, const ::plasmaRPC::ObjectIDs& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::plasmaRPC::ObjectDetailsList>>(PrepareAsyncGetObjectsRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void GetObjects(::grpc::ClientContext* context, const ::plasmaRPC::ObjectIDs* request, ::plasmaRPC::ObjectDetailsList* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetObjects(::grpc::ClientContext* context, const ::plasmaRPC::ObjectIDs* request, ::plasmaRPC::ObjectDetailsList* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetObjects(::grpc::ClientContext* context, const ::plasmaRPC::ObjectIDs* request, ::plasmaRPC::ObjectDetailsList* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::plasmaRPC::ObjectDetailsList>* AsyncGetObjectsRaw(::grpc::ClientContext* context, const ::plasmaRPC::ObjectIDs& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::plasmaRPC::ObjectDetailsList>* PrepareAsyncGetObjectsRaw(::grpc::ClientContext* context, const ::plasmaRPC::ObjectIDs& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetObjects_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetObjects(::grpc::ServerContext* context, const ::plasmaRPC::ObjectIDs* request, ::plasmaRPC::ObjectDetailsList* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetObjects : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetObjects() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetObjects() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetObjects(::grpc::ServerContext* /*context*/, const ::plasmaRPC::ObjectIDs* /*request*/, ::plasmaRPC::ObjectDetailsList* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetObjects(::grpc::ServerContext* context, ::plasmaRPC::ObjectIDs* request, ::grpc::ServerAsyncResponseWriter< ::plasmaRPC::ObjectDetailsList>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetObjects<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetObjects : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_GetObjects() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::plasmaRPC::ObjectIDs, ::plasmaRPC::ObjectDetailsList>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::plasmaRPC::ObjectIDs* request, ::plasmaRPC::ObjectDetailsList* response) { return this->GetObjects(context, request, response); }));}
    void SetMessageAllocatorFor_GetObjects(
        ::grpc::experimental::MessageAllocator< ::plasmaRPC::ObjectIDs, ::plasmaRPC::ObjectDetailsList>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::plasmaRPC::ObjectIDs, ::plasmaRPC::ObjectDetailsList>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetObjects() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetObjects(::grpc::ServerContext* /*context*/, const ::plasmaRPC::ObjectIDs* /*request*/, ::plasmaRPC::ObjectDetailsList* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetObjects(
      ::grpc::CallbackServerContext* /*context*/, const ::plasmaRPC::ObjectIDs* /*request*/, ::plasmaRPC::ObjectDetailsList* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetObjects(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::plasmaRPC::ObjectIDs* /*request*/, ::plasmaRPC::ObjectDetailsList* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_GetObjects<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_GetObjects<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetObjects : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetObjects() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetObjects() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetObjects(::grpc::ServerContext* /*context*/, const ::plasmaRPC::ObjectIDs* /*request*/, ::plasmaRPC::ObjectDetailsList* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetObjects : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetObjects() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetObjects() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetObjects(::grpc::ServerContext* /*context*/, const ::plasmaRPC::ObjectIDs* /*request*/, ::plasmaRPC::ObjectDetailsList* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetObjects(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetObjects : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_GetObjects() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetObjects(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetObjects() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetObjects(::grpc::ServerContext* /*context*/, const ::plasmaRPC::ObjectIDs* /*request*/, ::plasmaRPC::ObjectDetailsList* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetObjects(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetObjects(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetObjects : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetObjects() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::plasmaRPC::ObjectIDs, ::plasmaRPC::ObjectDetailsList>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::plasmaRPC::ObjectIDs, ::plasmaRPC::ObjectDetailsList>* streamer) {
                       return this->StreamedGetObjects(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetObjects() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetObjects(::grpc::ServerContext* /*context*/, const ::plasmaRPC::ObjectIDs* /*request*/, ::plasmaRPC::ObjectDetailsList* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetObjects(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::plasmaRPC::ObjectIDs,::plasmaRPC::ObjectDetailsList>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetObjects<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetObjects<Service > StreamedService;
};

}  // namespace plasmaRPC


#endif  // GRPC_rpc_2eproto__INCLUDED