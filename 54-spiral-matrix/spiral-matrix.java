class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {

        List<Integer> spiralMatrix = new ArrayList<Integer>();

        int top = 0 , bottom = matrix.length-1 , left = 0 , right = matrix[0].length - 1;

		while(top <= bottom && left <= right) {
			
			for(int i = left; i <= right ; i++) {
				System.out.print(matrix[top][i] + " ");
                spiralMatrix.add(matrix[top][i]);
			}
			top++;
			
			
			
			for(int i = top; i <= bottom ; i++) {
				System.out.print(matrix[i][right] + " ");
                spiralMatrix.add(matrix[i][right]);		
			}
			right--;
			
			if(top <= bottom){
                for(int i = right ; i>= left; i-- ) {
                    System.out.print(matrix[bottom][i]+ " ");
                    spiralMatrix.add(matrix[bottom][i]);
                }
                bottom--;
            }
			
			
			if(left <= right){
                for(int i = bottom ; i>=top ; i--) {
                    System.out.print(matrix[i][left]+" ");
                    spiralMatrix.add(matrix[i][left]);
                }
                left++;
            }
			
		}
		return spiralMatrix;
    }
}