class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // si el árbol está vacío, no hay nada que regresar
        if (root == nullptr) return nullptr;

        // si encontramos a p o a q, este nodo puede ser parte del LCA
        if (root == p || root == q) return root;

        // buscamos en el lado izquierdo
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        // buscamos en el lado derecho
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        // si encontramos uno en cada lado, entonces este nodo es su ancestro común
        if (left != nullptr && right != nullptr)
            return root;

        // si solo encontramos en un lado, regresamos ese lado
        return left == nullptr ? right : left;
    }
};
