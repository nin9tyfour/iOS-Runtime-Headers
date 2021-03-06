/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BRCLocalItem, BRCPackageManifestForUpload, NSString;

@interface BRCUploadDocumentOperation : BRCOperation <BRCUploadOperation> {
    BRCLocalItem *_item;
    BRCPackageManifestForUpload *_manifest;
    id _progressBlock;
    id _uploadCompletionBlock;
}

@property(readonly) double budgetRequired;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) id progressBlock;
@property(readonly) Class superclass;
@property(readonly) int transferPriority;
@property(copy) id uploadCompletionBlock;

- (void).cxx_destruct;
- (id)_copyThumnbailToStage:(id)arg1;
- (BOOL)_isItemTooLarge;
- (double)budgetRequired;
- (id)description;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithLocalItem:(id)arg1;
- (void)main;
- (id)progressBlock;
- (void)setProgressBlock:(id)arg1;
- (void)setUploadCompletionBlock:(id)arg1;
- (int)transferPriority;
- (id)uploadAssetsOperationWithRecord:(id)arg1;
- (id)uploadCompletionBlock;

@end
