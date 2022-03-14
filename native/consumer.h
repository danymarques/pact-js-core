#include <napi.h>

Napi::Value PactffiUponReceiving(const Napi::CallbackInfo& info);
Napi::Value PactffiWithBinaryFile(const Napi::CallbackInfo& info);
Napi::Value PactffiWithBody(const Napi::CallbackInfo& info);
Napi::Value PactffiWithHeader(const Napi::CallbackInfo& info);
Napi::Value PactffiWithMessagePactMetadata(const Napi::CallbackInfo& info);
Napi::Value PactffiWithMultipartFile(const Napi::CallbackInfo& info);
Napi::Value PactffiWithPactMetadata(const Napi::CallbackInfo& info);
Napi::Value PactffiWithQueryParameter(const Napi::CallbackInfo& info);
Napi::Value PactffiWithRequest(const Napi::CallbackInfo& info);
Napi::Value PactffiWithSpecification(const Napi::CallbackInfo& info);
Napi::Value PactffiWritePactFile(const Napi::CallbackInfo& info);
Napi::Value PactffiCleanupMockServer(const Napi::CallbackInfo& info);
Napi::Value PactffiCreateMockServerForPact(const Napi::CallbackInfo& info);
Napi::Value PactffiCreateMockServer(const Napi::CallbackInfo& info);
Napi::Value PactffiGiven(const Napi::CallbackInfo& info);
Napi::Value PactffiGivenWithParam(const Napi::CallbackInfo& info);
Napi::Value PactffiMockServerLogs(const Napi::CallbackInfo& info);
Napi::Value PactffiMockServerMatched(const Napi::CallbackInfo& info);
Napi::Value PactffiMockServerMismatches(const Napi::CallbackInfo& info);
Napi::Value PactffiNewAsyncMessage(const Napi::CallbackInfo& info);
Napi::Value PactffiNewInteraction(const Napi::CallbackInfo& info);
Napi::Value PactffiNewPact(const Napi::CallbackInfo& info);

// Message Pact
Napi::Value PactffiNewMessage(const Napi::CallbackInfo& info);
Napi::Value PactffiNewSyncMessageInteraction(const Napi::CallbackInfo& info);
Napi::Value PactffiNewMessageInteraction(const Napi::CallbackInfo& info);
Napi::Value PactffiNewMessagePact(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageReify(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageGiven(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageGivenWithParam(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageSetDescription(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageWithContents(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageWithMetadata(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageExpectsToReceive(const Napi::CallbackInfo& info);
Napi::Value PactffiWriteMessagePactFile(const Napi::CallbackInfo& info);

// Plugins
Napi::Value PactffiUsingPlugin(const Napi::CallbackInfo& info);
Napi::Value PactffiCleanupPlugins(const Napi::CallbackInfo& info);
Napi::Value PactffiPluginInteractionContents(const Napi::CallbackInfo& info);

// Unimplemented
Napi::Value PactffiConsumerGetName(const Napi::CallbackInfo& info);
Napi::Value PactffiFreeMessagePactHandle(const Napi::CallbackInfo& info);
Napi::Value PactffiFreePactHandle(const Napi::CallbackInfo& info);
Napi::Value PactffiGenerateDatetimeString(const Napi::CallbackInfo& info);
Napi::Value PactffiGenerateRegexValue(const Napi::CallbackInfo& info);
Napi::Value PactffiGetErrorMessage(const Napi::CallbackInfo& info);
Napi::Value PactffiGetTlsCaCertificate(const Napi::CallbackInfo& info);
Napi::Value PactffiInteractionTestName(const Napi::CallbackInfo& info);
Napi::Value PactffiMatchMessage(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageDelete(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageFindMetadata(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageGetContents(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageGetContentsBin(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageGetContentsLength(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageGetDescription(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageGetMetadataIter(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageGetProviderState(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageGetProviderStateIter(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageInsertMetadata(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageMetadataIterDelete(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageMetadataIterNext(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageMetadataPairDelete(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageNew(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageNewFromBody(const Napi::CallbackInfo& info);
Napi::Value PactffiMessageNewFromJson(const Napi::CallbackInfo& info);
Napi::Value PactffiMessagePactDelete(const Napi::CallbackInfo& info);
Napi::Value PactffiMessagePactFindMetadata(const Napi::CallbackInfo& info);
Napi::Value PactffiMessagePactGetConsumer(const Napi::CallbackInfo& info);
Napi::Value PactffiMessagePactGetMessageIter(const Napi::CallbackInfo& info);
Napi::Value PactffiMessagePactGetMetadataIter(const Napi::CallbackInfo& info);
Napi::Value PactffiMessagePactGetProvider(const Napi::CallbackInfo& info);
Napi::Value PactffiMessagePactMessageIterDelete(const Napi::CallbackInfo& info);
Napi::Value PactffiMessagePactMessageIterNext(const Napi::CallbackInfo& info);
Napi::Value PactffiMessagePactMetadataIterDelete(const Napi::CallbackInfo& info);
Napi::Value PactffiMessagePactMetadataIterNext(const Napi::CallbackInfo& info);
Napi::Value PactffiMessagePactMetadataTripleDelete(const Napi::CallbackInfo& info);
Napi::Value PactffiMessagePactNewFromJson(const Napi::CallbackInfo& info);
Napi::Value PactffiMismatchAnsiDescription(const Napi::CallbackInfo& info);
Napi::Value PactffiMismatchDescription(const Napi::CallbackInfo& info);
Napi::Value PactffiMismatchSummary(const Napi::CallbackInfo& info);
Napi::Value PactffiMismatchToJson(const Napi::CallbackInfo& info);
Napi::Value PactffiMismatchType(const Napi::CallbackInfo& info);
Napi::Value PactffiMismatchesDelete(const Napi::CallbackInfo& info);
Napi::Value PactffiMismatchesGetIter(const Napi::CallbackInfo& info);
Napi::Value PactffiMismatchesIterDelete(const Napi::CallbackInfo& info);
Napi::Value PactffiMismatchesIterNext(const Napi::CallbackInfo& info);
Napi::Value PactffiNewSyncMessageInteraction(const Napi::CallbackInfo& info);
Napi::Value PactffiPactHandleGetMessageIter(const Napi::CallbackInfo& info);
Napi::Value PactffiPactHandleGetSyncMessageIter(const Napi::CallbackInfo& info);
Napi::Value PactffiPactHandleWriteFile(const Napi::CallbackInfo& info);
Napi::Value PactffiPactMessageIterDelete(const Napi::CallbackInfo& info);
Napi::Value PactffiPactMessageIterNext(const Napi::CallbackInfo& info);
Napi::Value PactffiPactSyncMessageIterDelete(const Napi::CallbackInfo& info);
Napi::Value PactffiPactSyncMessageIterNext(const Napi::CallbackInfo& info);
Napi::Value PactffiProviderGetName(const Napi::CallbackInfo& info);
Napi::Value PactffiProviderStateDelete(const Napi::CallbackInfo& info);
Napi::Value PactffiProviderStateGetName(const Napi::CallbackInfo& info);
Napi::Value PactffiProviderStateGetParamIter(const Napi::CallbackInfo& info);
Napi::Value PactffiProviderStateIterDelete(const Napi::CallbackInfo& info);
Napi::Value PactffiProviderStateIterNext(const Napi::CallbackInfo& info);
Napi::Value PactffiProviderStateParamIterDelete(const Napi::CallbackInfo& info);
Napi::Value PactffiProviderStateParamIterNext(const Napi::CallbackInfo& info);
Napi::Value PactffiProviderStateParamPairDelete(const Napi::CallbackInfo& info);
Napi::Value PactffiResponseStatus(const Napi::CallbackInfo& info);
Napi::Value PactffiStringDelete(const Napi::CallbackInfo& info);
Napi::Value PactffiSyncMessageDelete(const Napi::CallbackInfo& info);
Napi::Value PactffiSyncMessageGetDescription(const Napi::CallbackInfo& info);
Napi::Value PactffiSyncMessageGetNumberResponses(const Napi::CallbackInfo& info);
Napi::Value PactffiSyncMessageGetProviderState(const Napi::CallbackInfo& info);
Napi::Value PactffiSyncMessageGetProviderStateIter(const Napi::CallbackInfo& info);
Napi::Value PactffiSyncMessageGetRequestContents(const Napi::CallbackInfo& info);
Napi::Value PactffiSyncMessageGetRequestContentsBin(const Napi::CallbackInfo& info);
Napi::Value PactffiSyncMessageGetRequestContentsLength(const Napi::CallbackInfo& info);
Napi::Value PactffiSyncMessageGetResponseContents(const Napi::CallbackInfo& info);
Napi::Value PactffiSyncMessageGetResponseContentsBin(const Napi::CallbackInfo& info);
Napi::Value PactffiSyncMessageGetResponseContentsLength(const Napi::CallbackInfo& info);
Napi::Value PactffiSyncMessageSetDescription(const Napi::CallbackInfo& info);
