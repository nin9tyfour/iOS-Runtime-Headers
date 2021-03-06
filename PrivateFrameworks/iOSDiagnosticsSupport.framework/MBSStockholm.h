/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iOSDiagnosticsSupport.framework/iOSDiagnosticsSupport
 */

@class NFCardEmulation, NSObject<OS_dispatch_semaphore>, NSString;

@interface MBSStockholm : NSObject <NFCardEmulationDelegate, NFCardManagerDelegate> {
    NFCardEmulation *_cardEmulation;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    bool_cardEmulationSuspended;
}

@property(retain) NFCardEmulation * cardEmulation;
@property bool cardEmulationSuspended;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSObject<OS_dispatch_semaphore> * semaphore;
@property(readonly) Class superclass;

- (void)cardEmulation:(id)arg1 didChangeRestrictedMode:(BOOL)arg2;
- (void)cardEmulation:(id)arg1 didDetectField:(BOOL)arg2;
- (void)cardEmulation:(id)arg1 didSelectCard:(id)arg2;
- (void)cardEmulation:(id)arg1 didStartTransaction:(id)arg2;
- (void)cardEmulation:(id)arg1 isSuspended:(BOOL)arg2;
- (id)cardEmulation;
- (bool)cardEmulationSuspended;
- (void)cardEmulationTransactionButtonPressed:(id)arg1;
- (void)cardEmulationTransactionTimerExpired:(id)arg1;
- (void)fieldDetect:(id)arg1 isSuspended:(BOOL)arg2;
- (id)init;
- (bool)pingRotterdam:(id*)arg1;
- (bool)pingStockholm:(id*)arg1;
- (id)semaphore;
- (id)serverRegistrationInfo:(double)arg1 error:(id*)arg2;
- (void)setCardEmulation:(id)arg1;
- (void)setCardEmulationSuspended:(bool)arg1;
- (void)setSemaphore:(id)arg1;
- (bool)startCardEmulationWithTimeout:(double)arg1 error:(id*)arg2;
- (bool)stopCardEmulationWithTimeout:(double)arg1 error:(id*)arg2;

@end
