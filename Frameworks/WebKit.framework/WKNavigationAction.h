/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSURL, NSURLRequest, WKFrameInfo;

@interface WKNavigationAction : NSObject {
    struct RetainPtr<WKFrameInfo> { 
        void *m_ptr; 
    struct RetainPtr<WKFrameInfo> { 
        void *m_ptr; 
    struct RetainPtr<NSURLRequest> { 
        void *m_ptr; 
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    BOOL _canHandleRequest;
    int _navigationType;
    } _originalURL;
    } _request;
    } _sourceFrame;
    } _targetFrame;
    BOOL _userInitiated;
}

@property(readonly) BOOL _canHandleRequest;
@property(readonly) NSURL * _originalURL;
@property(setter=_setOriginalURL:,copy) NSURL * _originalURL;
@property(getter=_isUserInitiated,readonly) BOOL _userInitiated;
@property(readonly) int navigationType;
@property(copy) NSURLRequest * request;
@property(copy) WKFrameInfo * sourceFrame;
@property(copy) WKFrameInfo * targetFrame;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_canHandleRequest;
- (id)_initWithNavigationActionData:(const struct NavigationActionData { int x1; int x2; int x3; boolx4; boolx5; }*)arg1;
- (BOOL)_isUserInitiated;
- (id)_originalURL;
- (void)_setOriginalURL:(id)arg1;
- (id)description;
- (int)navigationType;
- (id)request;
- (void)setRequest:(id)arg1;
- (void)setSourceFrame:(id)arg1;
- (void)setTargetFrame:(id)arg1;
- (id)sourceFrame;
- (id)targetFrame;

@end
